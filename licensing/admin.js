const el = id => document.getElementById(id);
let csrf = '';
let licenses = [];
function signedIn(value) { el('login-panel').hidden = value; el('dashboard').hidden = !value; if (!value) { csrf = ''; el('result').hidden = true; el('key').textContent = ''; el('license').value = ''; licenses = []; el('license-list').replaceChildren(); el('license-summary').textContent = ''; } }
async function request(path, body) {
  const response = await fetch(path, {method: 'POST', credentials: 'same-origin', headers: {'Content-Type': 'application/json', 'X-CSRF-Token': csrf}, body: JSON.stringify(body)});
  const result = await response.json();
  if (!response.ok) { if (response.status === 401) signedIn(false); throw new Error(response.status === 401 ? 'UsuÃ¡rio ou senha invÃ¡lidos, ou sessÃ£o expirada.' : 'NÃ£o foi possÃ­vel concluir a operaÃ§Ã£o.'); }
  return result;
}
el('login').onsubmit = async event => {
  event.preventDefault(); el('status').textContent = 'Entrandoâ€¦';
  try { const result = await request('/admin/login', {username: el('username').value, password: el('password').value}); csrf = result.csrf; el('password').value = ''; signedIn(true); el('status').textContent = ''; await loadLicenses(); } catch (error) { el('status').textContent = error.message; }
};
el('logout').onclick = async () => { try { await request('/admin/logout', {}); signedIn(false); el('status').textContent = 'VocÃª saiu do painel.'; } catch (error) { el('status').textContent = error.message; } };
el('issue').onsubmit = async event => {
  event.preventDefault(); el('result').hidden = true; el('status').textContent = 'Gerandoâ€¦';
  try {
    const result = await request('/admin/issue', {days: Number(el('days').value), owner: el('owner').value});
    el('key').textContent = result.key; el('license').value = result.id;
    el('expiry').textContent = `VÃ¡lida atÃ© ${new Date(result.expires * 1000).toLocaleString('pt-BR')}`;
    el('revoke').disabled = false; el('result').hidden = false; el('status').textContent = 'Guarde a chave: ela Ã© exibida somente nesta emissÃ£o.';
  } catch (error) { el('status').textContent = error.message; }
};
el('copy').onclick = async () => { try { await navigator.clipboard.writeText(el('key').textContent); el('status').textContent = 'Chave copiada.'; } catch { el('status').textContent = 'Selecione a chave para copiÃ¡-la.'; } };
el('revoke').onclick = async () => {
  if (!confirm('Revogar esta chave? O aparelho perderÃ¡ o acesso na prÃ³xima validaÃ§Ã£o.')) return;
  try { await request('/admin/revoke', {id: el('license').value}); el('revoke').disabled = true; el('status').textContent = 'Chave revogada.'; await loadLicenses(); } catch (error) { el('status').textContent = error.message; }
};
(async () => { try { const response = await fetch('/admin/session', {credentials:'same-origin'}); if (response.ok) { csrf = (await response.json()).csrf; signedIn(true); await loadLicenses(); } } catch { el('status').textContent = 'NÃ£o foi possÃ­vel conectar ao servidor.'; } })();

async function loadLicenses() {
  const response = await fetch('/admin/licenses', {credentials:'same-origin'});
  if (!response.ok) { if (response.status === 401) signedIn(false); throw new Error('Não foi possível carregar as licenças.'); }
  licenses = (await response.json()).licenses; renderLicenses();
}
function renderLicenses() {
  const query = el('search').value.trim().toLocaleLowerCase('pt-BR');
  const shown = licenses.filter(item => `${item.owner} ${item.id}`.toLocaleLowerCase('pt-BR').includes(query));
  el('license-summary').textContent = `${shown.length} de ${licenses.length} licenças`;
  el('license-list').replaceChildren();
  const labels = {active:'Ativa',pending:'Aguardando ativação',expired:'Vencida',revoked:'Revogada'};
  for (const item of shown) {
    const card = document.createElement('article'); card.className = 'license-card';
    const title = document.createElement('h3'); title.textContent = item.owner || 'Sem nome';
    const state = document.createElement('p'); state.textContent = `${labels[item.status]} · ${item.bound ? 'Aparelho vinculado' : 'Sem aparelho vinculado'}`;
    const expiry = document.createElement('p'); expiry.textContent = `Válida até ${new Date(item.expires * 1000).toLocaleString('pt-BR')}`;
    const id = document.createElement('small'); id.textContent = `ID: ${item.id}`;
    const rename = document.createElement('button'); rename.textContent = 'Editar nome';
    rename.onclick = async () => { const owner = prompt('Nome do responsável:', item.owner); if (owner === null) return; if (!owner.trim() || owner.trim().length > 120) { el('status').textContent = 'Informe um nome com até 120 caracteres.'; return; } try { await request('/admin/owner',{id:item.id,owner}); await loadLicenses(); el('status').textContent = 'Nome atualizado.'; } catch(error) { el('status').textContent = error.message; } };
    const revoke = document.createElement('button'); revoke.textContent = 'Revogar'; revoke.disabled = !!item.revoked;
    revoke.onclick = async () => { if (!confirm(`Revogar a licença de ${item.owner || 'Sem nome'}?`)) return; try { await request('/admin/revoke',{id:item.id}); await loadLicenses(); el('status').textContent = 'Licença revogada.'; } catch(error) { el('status').textContent = error.message; } };
    const actions = document.createElement('div'); actions.className = 'license-actions'; actions.append(rename,revoke);
    card.append(title,state,expiry,id,actions); el('license-list').append(card);
  }
  if (!shown.length) { const empty = document.createElement('p'); empty.textContent = licenses.length ? 'Nenhuma licença encontrada.' : 'Nenhuma licença cadastrada.'; el('license-list').append(empty); }
}
el('search').oninput = renderLicenses;
el('refresh').onclick = () => loadLicenses().catch(error => { el('status').textContent = error.message; });
