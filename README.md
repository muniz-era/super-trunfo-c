# Super Trunfo - Nível Novato (Desafio de C)

Fala pessoal! Esse repositório foi criado para entregar o primeiro desafio prático de programação em C do curso de ADS. 

##  Qual é a do projeto?

A ideia aqui é montar a base de um jogo de Super Trunfo focado em cidades. Nesse nível inicial, a missão foi treinar o básico do básico: declaração de variáveis, tipos de dados, e dominar o `printf` e `scanf`.

Uma regra do professor para esse nível foi **não usar estruturas de repetição (for/while) nem condicionais (if/else)**. Por causa disso, o código foi feito de forma 100% linear e sequencial, focado apenas em ler os dados do teclado e jogar na tela formatado bonitinho depois.

##  O que eu usei
- Linguagem C 
- Compilador GCC

## 📋 O que o sistema cadastra?
O programa pede pro usuário preencher os dados de duas cartas. Para cada uma, ele lê:
1. **Estado:** Uma letra de A a H
2. **Código:** Letra + número (ex: A01, B02)
3. **Cidade:** Nome do lugar (arrumei o `scanf` pra aceitar nome composto com espaços!)
4. **População:** Quantidade de habitantes
5. **Área:** Tamanho em km²
6. **PIB:** A grana da cidade
7. **Pontos Turísticos:** Quantos lugares legais tem pra visitar

##  Como testar 

Se você quiser baixar e testar aí no seu terminal, é só compilar o arquivo C assim:

```bash
gcc super_trunfo.c -o super_trunfo
