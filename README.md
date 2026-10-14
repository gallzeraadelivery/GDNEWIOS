# AMG 18.1.1 — rootless

Pseudocódigo gerado pelo Ghidra a partir do pacote `com.amgios.rootless` 18.1.1 (`248.deb`), arquitetura ARM64.

Origem do pacote: https://apt.amgios.com/debs/248.deb

## Arquivos descompilados

- [Aplicativo AMG](rootless/AMG.c)
- [amg.dylib](rootless/amg.dylib.c)
- [SubstrateSafetyam.dylib](rootless/SubstrateSafetyam.dylib.c)
- [TG@wx_zyyy.dylib — ARM64](rootless/TG@wx_zyyy.dylib.c)

O conteúdo é pseudocódigo, não o código-fonte original nem um projeto diretamente compilável. Há trechos incompletos, indicados pelos avisos do Ghidra dentro dos arquivos.

A pasta rootless/ contém somente o pseudocódigo da variante rootless. Os binários originais, pacotes .deb e relatórios de análise não fazem parte dos arquivos versionados.

## Tradução em português brasileiro

Os recursos de tradução e as instruções para gerar um pacote de teste estão em [localization/README.md](localization/README.md). A versão ptbr5 traduz os 45 textos de localização e 89 textos distintos dos storyboards compilados, incluindo Configurações. Mensagens criadas pelo executável ainda precisam de verificação no iPhone.

## Estado e descobertas

Registro completo: [13/10/2026](docs/2026-10-13-status.md). Inclui tradução, branding corrigido v2, testes no iPhone e servidor novo. **A nova licença ainda não está integrada ao AMG.** Os testes de licenciamento são de um cliente independente.

Tradução revisada em 14/10/2026: [guia de todos os campos e limites observados](localization/GUIA-DOS-CAMPOS.md). Pacote atual gdnewios3/ptbr6, com validação estrutural concluída e conferência visual no iPhone pendente.
