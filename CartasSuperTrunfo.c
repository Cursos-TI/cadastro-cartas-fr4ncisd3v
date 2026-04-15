#include "stdio.h"

int main()
{
    // Variaveis Carta 01
    char CardLetra01[5];
    char CardCode01[12];
    char cityname01[20];
    int populacao01;
    float citykm01;
    float pib01;
    int turistpoints01;
    float densidadepopulacional01;
    float pibpercapita01;

    // Variaveis Carta 02
    char CardLetra02[5];
    char CardCode02[12];
    char cityname02[20];
    int populacao02;
    float citykm02;
    float pib02;
    int turistpoints02;
    float densidadepopulacional02;
    float pibpercapita02;

    // Coleta De dados carta 1

    printf("Escolha uma letra A-Z: ");
    scanf("%s", &CardLetra01);

    sprintf(CardCode01, "%s01", &CardLetra01);

    printf("Nome da cidade: ");
    scanf("%s", &cityname01);

    printf("Km da cidade: ");
    scanf("%f", &citykm01);

    printf("População da cidade: ");
    scanf("%d", &populacao01);

    printf("PIB da cidade: ");
    scanf("%f", &pib01);

    printf("Pontos Turisticos da cidade: ");
    scanf("%d", &turistpoints01);

    densidadepopulacional01 = populacao01 / citykm01;
    pibpercapita01 = pib01 / populacao01;

    // Coleta de dados carta 2

    printf("Segunda Carta\n");
    printf("Escolha uma letra A-Z: ");
    scanf("%s", &CardLetra02);

    sprintf(CardCode02, "%s02", &CardLetra02);

    printf("Nome da cidade: ");
    scanf("%s", &cityname02);

    printf("População da cidade: ");
    scanf("%d", &populacao02);

    printf("Km da cidade: ");
    scanf("%f", &citykm02);

    printf("PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Pontos Turisticos da cidade: ");
    scanf("%d", &turistpoints02);

    densidadepopulacional02 = (float)populacao02 / citykm02;
    pibpercapita02 = (float)pib02 / populacao02;

    // Mostrando Resultado Carta 1
    printf("\n");
    printf("Carta 01\n");
    printf("Letra: %s\n", CardLetra01);
    printf("Codigo: %s\n", CardCode01);
    printf("Cidade: %s\n", cityname01);
    printf("Km: %.2f\n", citykm01);
    printf("PIB: %.2f\n", pib01);
    printf("Pontos Turisticos: %d\n", turistpoints01);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional01);
    printf("PIB Per Capita: %.2f\n", pibpercapita01);

    // Mostrando Resultado Carta 2
    printf("\n");
    printf("Carta 02\n");
    printf("Letra: %s\n", CardLetra02);
    printf("Codigo: %s\n", CardCode02);
    printf("Cidade: %s\n", cityname02);
    printf("Km: %.2f\n", citykm02);
    printf("PIB: %.2f\n", pib02);
    printf("Pontos Turisticos: %d\n", turistpoints02);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional02);
    printf("PIB Per Capita: %.2f\n", pibpercapita02);

    // resultados
    printf("=== Resultados ===\n");

    if (populacao01 > populacao02)
    {
        printf("A cidade %s tem mais habitantes que a cidade %s\n", cityname01, cityname02);
    }
    else
    {
        printf("A cidade %s tem menos habitantes que a cidade %s\n", cityname01, cityname02);
    }

    if (citykm01 > citykm02)
    {
        printf("A cidade %s tem mais km que a cidade %s\n", cityname01, cityname02);
    }
    else
    {
        printf("A cidade %s tem menos km que a cidade %s\n", cityname01, cityname02);
    }

    if (pib01 > pib02)
    {
        printf("A cidade %s tem mais PIB que a cidade %s\n", cityname01, cityname02);
    }
    else
    {
        printf("A cidade %s tem menos PIB que a cidade %s\n", cityname01, cityname02);
    }

    if (turistpoints01 > turistpoints02)
    {
        printf("A cidade %s tem mais pontos turisticos que a cidade %s\n", cityname01, cityname02);
    }
    else
    {
        printf("A cidade %s tem menos pontos turisticos que a cidade %s\n", cityname01, cityname02);
    }

    if (densidadepopulacional01 > densidadepopulacional02)
    {
        printf("A cidade %s tem mais densidade populacional que a cidade %s\n", cityname01, cityname02);
    }
    else
    {
        printf("A cidade %s tem menos densidade populacional que a cidade %s\n", cityname01, cityname02);
    }

    return 0;
}
