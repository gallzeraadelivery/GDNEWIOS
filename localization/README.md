# Tradução para português brasileiro

A versão ptbr4 traduz as 45 entradas de Main.strings e os 89 textos chineses distintos encontrados nos storyboards compilados do AMG 18.1.1 rootless. Inclui os 52 rótulos encontrados no recurso da tela de Configurações, nas duas variantes de NIB. Os arquivos pt-BR e pt são incluídos no pacote, e o idioma de fallback do bundle passa a ser pt-BR.

A tradução ainda é parcial: mensagens e textos definidos pelo executável podem continuar em chinês. O pacote não foi instalado nem testado em um iPhone. O teste no dispositivo também precisa verificar textos cortados ou fora do lugar.

## Gerar o pacote

Requer Python 3. O script aceita somente o pacote rootless original 248.deb com o hash esperado. Ele cria a versão 18.1.1+ptbr4 e preserva os executáveis, dylibs e o conteúdo dos scripts de instalação. Os arquivos de dados mantêm proprietários e permissões originais; os metadados Debian são normalizados para control 0644 e scripts 0755.

```powershell
python scripts/build_rootless_ptbr.py --input caminho/248.deb --output caminho/amg-rootless-18.1.1-ptbr4.deb
```

O script não sobrescreve o arquivo original nem uma saída já existente. A geração verifica as chaves do storyboard, a sintaxe dos recursos e a integridade dos arquivos originais.

## Testar no iPhone

Use somente um ambiente rootless compatível com o pacote original. Instale o pacote de teste e selecione português brasileiro no aparelho ou no idioma do aplicativo, quando essa opção estiver disponível.

Verifique a abertura do app, os menus, a tela de configurações e a legibilidade dos rótulos. Para conferir a tradução, basta navegar pelas telas; não é necessário acionar funções que limpem dados, Keychain ou backups. Anote os textos que ainda aparecem em chinês para completar a próxima versão.

A assinatura de recursos do bundle original não foi refeita. A instalação e a abertura precisam ser validadas no jailbreak usado, e podem exigir reassinatura nesse ambiente. A integridade dos binários originais é preservada.

A versão descompilada em rootless/ continua sendo pseudocódigo e não é usada para recompilar o aplicativo.

A versão ptbr3 corrige os nomes dos membros ar para o formato Debian canônico e normaliza as permissões dos metadados. O pacote foi lido com sucesso por dpkg-deb --info e dpkg-deb --contents no Ubuntu, sem privilégio de root. A execução no iPhone ainda precisa de teste.

## Textos dos storyboards compilados

O arquivo pt-BR/nib-translations.json contém a tradução dos textos internos. scripts/nib_ptbr.py edita somente os valores de texto NS.bytes e ajusta o deslocamento da seção de classes, preservando chaves, objetos, referências e os demais valores. A versão ptbr4 altera 410 ocorrências em 44 arquivos NIB. Esses arquivos foram lidos por nibarchive 1.1.0 como validação independente. A tela de Configurações não contém valores chineses NS.bytes nos NIBs traduzidos; mensagens criadas pelo executável ainda dependem de verificação no aparelho.

## ptbr5 — rótulos completos na tela

A versão 18.1.1+ptbr5 usa textos mais curtos em Configurações e habilita o ajuste automático de fonte em seus UILabels, com escala mínima de 0,65. Os frames, vínculos, ações e binários originais são preservados. O pacote foi validado estruturalmente; a conferência visual final é feita no iPhone após a instalação.

## ptbr6 — significado das opções

Revisão de todos os rótulos estáticos; usa “simular” para dados informados aos apps, explica identificadores e distingue respring de reboot. Ajuste automático de fonte aplicado aos UILabels dos NIBs traduzidos. Consulte [o guia dos campos](GUIA-DOS-CAMPOS.md) para efeitos confirmados, não confirmados e limitações. Não corrige a lógica original nem integra a nova licença.
