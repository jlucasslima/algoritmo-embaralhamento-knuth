# Embaralhamento de Knuth (Fisher-Yates) em C

Este repositório contém uma implementação do **Algoritmo P de Knuth** (também conhecido como Fisher-Yates Shuffle) desenvolvido em linguagem C. O programa gera uma sequência de números de 1 a 50 e realiza um embaralhamento aleatório garantindo que todas as permutações possíveis tenham a mesma probabilidade de ocorrer.

## Sobre o Projeto
Projeto prático desenvolvido para consolidar conceitos de algoritmos estruturados e manipulação de arrays nos estudos de **Ciência da Computação na PUC-SP**. 

O objetivo principal focar na correta implementação matemática do embaralhamento, evitando os vícios comuns de sorteio em programação, e garantindo a aleatoriedade real através da semente de tempo do sistema.

## Funcionalidades
- Geração automática de uma lista sequencial de inteiros (1 a 50).
- Aplicação de semente de aleatoriedade (`srand` atrelado ao `time.h`).
- Embaralhamento em tempo linear O(n) através de trocas de posição diretas no array.

## Como Executar

Você pode rodar este código utilizando IDEs como o Dev-C++ ou compilando diretamente pelo terminal.

Para compilar via terminal usando o GCC:

```bash
gcc KnuthP.c -o embaralhador
./embaralhador
