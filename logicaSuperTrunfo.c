#include <stdio.h>

int main() {
    // ===== Dados para Carta 1 =====
    // Entrada: Estado representado por uma letra (A a H)
    char estado1;
    // Entrada: Código único da carta
    char codigo1[4];
    // Entrada: Nome da cidade referente à carta
    char cidade1[50];
    // Entrada: População da cidade
    unsigned long int populacao1;
    // Entrada: Área da cidade em km²
    float area1, pib1;
    // Entrada: Número de pontos turísticos relevantes
    int pontos1;
    // Cálculos derivados
    float densidade1, pibPerCapita1;

    // ===== Dados para Carta 2 =====
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // ===== Cadastro Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (letra A a H): "); // Entrada do Estado
    scanf(" %c", &estado1);
    printf("Código da carta: "); // Entrada do Código
    scanf("%s", codigo1);
    printf("Nome da cidade: "); // Entrada do Nome da Cidade
    scanf(" %[^\n]", cidade1);
    printf("População: "); // Entrada da População
    scanf("%lu", &populacao1);
    printf("Área (km²): "); // Entrada da Área
    scanf("%f", &area1);
    printf("PIB (bilhões R$): "); // Entrada do PIB
    scanf("%f", &pib1);
    printf("Pontos turísticos: "); // Entrada dos pontos turísticos
    scanf("%d", &pontos1);

    // ===== Cálculos Carta 1 =====
    densidade1 = populacao1 / area1; // Cálculo da densidade populacional
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Cálculo do PIB per capita

    // ===== Cadastro Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (letra A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // ===== Cálculos Carta 2 =====
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== Comparação baseada em atributo fixo: População =====
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");

    // Saída: Exibição da população da Carta 1
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);

    // Saída: Exibição da população da Carta 2
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    // Saída: Resultado da comparação
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate! Ambas possuem a mesma população.\n");
    }

    return 0;
}