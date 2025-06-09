# 🏙️ Super Trunfo - Cidades

Projeto desenvolvido em linguagem C com o objetivo de simular a comparação entre cartas de cidades no estilo do jogo **Super Trunfo**.

## 🧠 Objetivo

O programa cadastra **duas cartas** de cidades com as seguintes informações:

- Estado (sigla)
- Código da carta
- Nome da cidade
- População (habitantes)
- Área (km²)
- PIB (em bilhões de reais)
- Número de pontos turísticos

Após o cadastro, o programa realiza os seguintes cálculos:

- **Densidade Populacional** = População / Área  
- **PIB per capita** = PIB / População

Em seguida, **compara um atributo específico** entre as duas cartas e exibe a cidade vencedora com base nesse atributo.

## 🧾 Atributo Comparado

Neste projeto, o atributo escolhido para comparação é: **População**  

## 🖥️ Como usar

1. Compile o programa com `gcc`:
   ```bash
   gcc super_trunfo_cidades.c -o super_trunfo
