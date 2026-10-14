# gdnewios — identidade visual

Arte criada com a ferramenta integrada image_gen, usando a logo fornecida pelo usuário como referência. O ícone tem fundo opaco; a logo horizontal preserva transparência real. Os tamanhos iOS foram exportados do ícone gerado.

- `icon-master.png`: imagem gerada original.
- `icon-1024.png`: ícone quadrado opaco 1024 × 1024.
- `logo.png`: logo horizontal com transparência.
- `ios/`: seis tamanhos de ícone usados pelo aplicativo.
- `prompts.json`: prompts finais e modo de geração.
- `build-verification.json`: integridade dos executáveis e recursos alterados.

O aplicativo instalado é exibido como `gdnewios`. O pacote Debian passa a ser `com.gdnewios.rootless`, substituindo `com.amgios.rootless`. O bundle ID `com.superdev.AMG`, o executável e os caminhos internos foram preservados para manter compatibilidade com a ativação e os componentes existentes. A nova validação de licenças ainda não foi integrada ao AMG.

Pacote: `gdnewios-rootless-18.1.1-2.deb`, versão `18.1.1+gdnewios2`. Validado com dpkg-deb e instalado no iPhone. Os 78 NIBs passaram por um parser independente. Os quatro executáveis/dylibs continuam com bytes idênticos. Sete arquivos de preferências foram conferidos e permaneceram idênticos após a atualização. O processo do aplicativo continuou em execução após a abertura.

Reprodução: `python scripts/build_gdnewios_brand.py --input /caminho/amg-rootless-18.1.1-ptbr5.deb --output /caminho/gdnewios-rootless-18.1.1-2.deb`.

Correção: CFBundleName deve permanecer AMG; somente CFBundleDisplayName usa gdnewios. A versão 1 fechava em abertura nova e não deve ser reinstalada. A versão 2 corrigiu esse problema. Ver o registro diário para os limites dos testes anteriores.

Atualização 14/10/2026: pacote gdnewios-rootless-18.1.1-3.deb (18.1.1+gdnewios3), baseado na tradução ptbr6. SHA-256 feaacf89c38d9a8e0b5f282539d0a5dbff914345c96b07ba5bd5bcf4c2d728dc. Mantém a correção de CFBundleName da versão 2. Conferência visual desta atualização no iPhone ainda pendente.
