#include <stdio.h>

int main() {
    // --- Card ---
    char state1;
    char code1[4]; // Ex: A01, B02 
    char cityName1[50];
    int population1;
    float area1;
    float gdp1;
    int touristSpots1;

    float populationDensity1;
    float gdpPerCapita1;

    printf("--- Register Card 1 ---\n");

    printf("Enter the State (A-H): ");
    scanf(" %c", &state1); 

    printf("Enter the Card Code (e.g., A01): ");
    scanf("%s", code1);

    printf("Enter the City Name: ");
    scanf(" %[^\n]", cityName1); 

    printf("Enter the Population: ");
    scanf("%d", &population1);

    printf("Enter the Area (km²): ");
    scanf("%f", &area1);

    printf("Enter the GDP (in billions of BRL): ");
    scanf("%f", &gdp1);

    printf("Enter the Number of Tourist Spots: ");
    scanf("%d", &touristSpots1);

    // Calculations for the Card 
    populationDensity1 = (float)population1 / area1;
    gdpPerCapita1 = (gdp1 * 1000000000.0) / population1;
