# MiniText - Editor de Texto em C (CLI)

Este projeto está sendo realizado para aprimorar minhas habilidades na linguagem C

## Escopo do MVP

O projeto consiste em um editor de texto em terminal.  
O usuário escreve e edita conteúdo por linhas, podendo salvar e abrir arquivos `.txt`.

### Funcionalidades do MVP
- Inserir linha
- Listar linhas
- Editar linha
- Remover linha
- Salvar arquivo `.txt`
- Abrir arquivo `.txt`

### Funcionalidades pós-MVP (fase 2)
- Undo/Redo (desfazer e refazer ações)

## Requisitos funcionais (resumo)

1. **Inserir linha**  
   Permitir adicionar texto linha por linha ao documento em memória.

2. **Listar linhas**  
   Exibir todas as linhas com numeração.

3. **Editar linha**  
   Permitir alterar o conteúdo de uma linha existente.

4. **Remover linha**  
   Permitir excluir uma linha específica.

5. **Salvar/Abrir arquivo**  
   Salvar o documento em `.txt` e carregar um `.txt` existente.

6. **Undo/Redo (fase 2)**  
   Desfazer a última ação e refazer uma ação desfeita.


    Estrutura SRC
    - main: Ficará responsável pelo fluxo de menu e interação com usuário
    - editor: Terá consigo as regras de edição do documento
    - line: Estrutura de dados das linhas
    - fileio: Responsável por ler/escrever no arquivo
    - stack: Concederá suporte a undo/redo

    #Dentro do editor.h fiz a utilização do 'include guard', que é uma proteção no arquivo .h, que evita que ele seja incluído duas vezes na compilação, evitando erros de redefinição de struct e redefinição de função/typedef
    #Continuando no editor.h, dentro do guard, escrevi, um tipo Document mínimo, structs simples para que o projeto ao menos compile no momento. Após isso, escrevi os protótipos das funções

    
    