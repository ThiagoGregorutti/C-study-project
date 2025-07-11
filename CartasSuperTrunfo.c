#include <stdio.h>

int main() {
    // --- Carta ---
    char estado1;
    char codigo1[4]; // Ex: A01, B02 
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristico1;

    float densidadePopulacional1;
    float pibPerCapita1;

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Area (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos para a Carta 
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; 