from pathlib import Path
import json
base=Path(__file__).resolve().parents[1]
p=base/'localization/pt-BR/nib-translations.json'
d=json.loads(p.read_text(encoding='utf-8-sig'))
changes={
'Versão aleatória do iOS':'iOS aleatório','Selecionar versão do iOS':'Escolher iOS','Selecionar versão':'Escolher versão',
'Simular versão do iOS':'Alterar iOS','Simular modelo do aparelho':'Alterar modelo','Selecionar modelo do aparelho':'Escolher modelo',
'Selecionar modelo':'Escolher modelo','Simular localização':'Alterar local','Localização aleatória':'Local aleatório',
'Selecionar localização':'Escolher local','Selecionar tipo de rede':'Escolher rede','Selecionar rede':'Escolher rede',
'Selecionar operadora':'Escolher operadora','Simular horário de inicialização':'Início do sistema',
'Simular disco e memória':'Disco e memória','Simular nome do aparelho':'Nome do aparelho','Simular brilho da tela':'Brilho da tela',
'Simular bateria e volume':'Bateria e volume','Simular dados do Wi-Fi':'Dados do Wi-Fi','Simular modelo iPad':'Modelo iPad',
'Simular ID do hardware':'ID do hardware','Parâmetros aleatórios do aparelho':'Dados aleatórios',
'Modelos para seleção aleatória':'Modelos aleatórios','Modo avião ao gerar novo aparelho':'Modo avião: nova identidade',
'Modo avião ao trocar registro':'Modo avião: trocar perfil','Ocultar jailbreak: modo avançado':'Jailbreak: modo avançado',
'Limpar área de transferência':'Limpar copiar/colar','Fazer backup do Keychain':'Backup do Keychain',
'Importar também o Keychain':'Incluir Keychain','Restaurar configurações padrão':'Restaurar padrões',
'Limpar rastros da App Store':'Limpar App Store','Aplicativo selecionado':'App selecionado',
'Histórico de backups':'Backups salvos','Detalhes do registro':'Detalhes do backup',
'Importar e exportar dados AMG':'Importar/exportar AMG','Liberar espaço: apagar fotos e vídeos':'Apagar fotos e vídeos',
'Reiniciar interface (respring)':'Reiniciar interface'
}
for key,value in d.items(): d[key]=changes.get(value,value)
p.write_text(json.dumps(d,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
p=base/'localization/pt-BR/Main.strings'; text=p.read_text(encoding='utf-8-sig')
for old,new in changes.items(): text=text.replace('= '+json.dumps(old,ensure_ascii=False)+';', '= '+json.dumps(new,ensure_ascii=False)+';')
p.write_text(text,encoding='utf-8')
print('Compact translations saved')
