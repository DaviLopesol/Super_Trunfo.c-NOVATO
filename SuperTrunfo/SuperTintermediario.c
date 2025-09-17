#include <stdio.h>

int main() {
    // Variáveis para carta 1
    char estado1[20], capital1[20], codigo1[10];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Variáveis para carta 2
    char estado2[20], capital2[20], codigo2[10];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Entrada de dados da carta 1
    printf("Carta 1:\n");
    printf("Nome do Estado: ");
    scanf("%s", estado1);
    printf("Nome da Capital: ");
    scanf("%s", capital1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("-------------------------------------------------\n");

    // Entrada de dados da carta 2
    printf("Carta 2:\n");
    printf("Nome do Estado: ");
    scanf("%s", estado2);
    printf("Nome da Capital: ");
    scanf("%s", capital2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    printf("-------------------------------------------------\n");

    // Exibição dos resultados carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Capital: %s\n", capital1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Codigo: %s\n", codigo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("-------------------------------------------------\n");

    // Exibição dos resultados carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Capital: %s\n", capital2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Codigo: %s\n", codigo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("-------------------------------------------------\n");

    return 0;
}