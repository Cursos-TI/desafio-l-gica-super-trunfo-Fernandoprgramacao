#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 2 - Comparação das Cartas
// Este código compara duas cidades com base em um atributo numérico definido no código.

int main() {
    // Definição de variáveis da cidade 1
    char estado1[3], codigo1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // Definição de variáveis da cidade 2
    char estado2[3], codigo2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // ----- Cadastro da Carta 1 -----
    printf("===== Cadastro da Carta 1 =====\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);
    printf("Codigo da carta: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê string com espaço
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de R$): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ----- Cadastro da Carta 2 -----
    printf("\n===== Cadastro da Carta 2 =====\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);
    printf("Codigo da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2); // lê string com espaço
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de R$): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ----- Cálculos -----
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ----- Exibição dos dados -----
    printf("\n===== Dados das Cartas =====\n");
    printf("Carta 1: %s (%s)\n", nomeCidade1, estado1);
    printf("Populacao: %d | Area: %.2f km² | PIB: %.2f bi | Densidade: %.2f hab/km² | PIB per capita: R$ %.2f\n",
           populacao1, area1, pib1, densidade1, pibPerCapita1);

    printf("Carta 2: %s (%s)\n", nomeCidade2, estado2);
    printf("Populacao: %d | Área: %.2f km² | PIB: %.2f bi | Densidade: %.2f hab/km² | PIB per capita: R$ %.2f\n",
           populacao2, area2, pib2, densidade2, pibPerCapita2);

    // ===== Comparação de Cartas =====
    printf("\n===== Comparacao de cartas (Atributo: Populacao) =====\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu com maior populacao (%d habitantes).\n", nomeCidade1, populacao1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu com maior populacao (%d habitantes).\n", nomeCidade2, populacao2);
    } else {
        printf("Resultado: Empate! Ambas as cidades têm a mesma populacao: %d habitantes.\n", populacao1);
    }

    return 0;
}
