#include <stdio.h>

    int main() {
    
    //carta 1 
    char estado1[50];
    char codigo_da_carta1[50]; 
    int populacao1;
    float area_em_km1;
    float pib1;
    int numero_de_pontos_turisticos1;
    float densidade_populacional1, pib_per_capita1, inverso_da_densidade_populacional1;
    float super_poder1;
    
    //carta 2
    char estado2[50];
    char codigo_da_carta2[50];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;
    float densidade_populacional2, pib_per_capita2, inverso_da_densidade_populacional2;
    float super_poder2;

   // Área para entrada de dados
    printf ("informacoes da carta 1 \n");
    printf ("digite o estado da carta 1: \n");
    scanf  ("%49s",estado1);
    printf ("digite o codigo da carta 1: \n");
    scanf  ("%49s",codigo_da_carta1);
    printf ("digite a populacao: \n");
    scanf  ("%d",&populacao1);
    printf ("digite a area em km: \n");
    scanf  ("%f",&area_em_km1);
    printf ("digite o pib: \n");
    scanf  ("%f",&pib1);
    printf ("digite o numero de pontos turisticos: \n");
    scanf  ("%d",&numero_de_pontos_turisticos1);
    printf ("carta 1 completa! \n");

    printf ("informacoes da carta 2 \n");
    printf ("digite o estado da carta 2: \n");
    scanf  ("%49s",estado2);
    printf ("digite o codigo da carta 2: \n");
    scanf  ("%49s",codigo_da_carta2);
    printf ("digite a populacao: \n");
    scanf  ("%d",&populacao2);
    printf ("digite a area em km: \n");
    scanf  ("%f",&area_em_km2);
    printf ("digite o pib: \n");
    scanf  ("%f",&pib2);
    printf ("digite o numero de pontos turisticos: \n");
    scanf  ("%d",&numero_de_pontos_turisticos2);
    printf ("carta 2 completa! \n");
    
    densidade_populacional1 = populacao1 / area_em_km1;
    pib_per_capita1 = pib1 / populacao1; 

    densidade_populacional2 = populacao2 / area_em_km2;
    pib_per_capita2 = pib2 / populacao2; 

    inverso_da_densidade_populacional1 = area_em_km1 / populacao1;
    inverso_da_densidade_populacional2 = area_em_km2 / populacao2;

    super_poder1 = populacao1 + area_em_km1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 + inverso_da_densidade_populacional1;
    super_poder2 = populacao2 + area_em_km2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + inverso_da_densidade_populacional2;

    // Área para exibição dos dados da cidade

    printf("\n====================carta 1===================\n");
    printf("estado: %s \n", estado1);
    printf("codigo da carta: %s \n", codigo_da_carta1);
    printf("populacao: %d \n", populacao1);
    printf("area em km: %.3f km\n", area_em_km1);
    printf("pib: %.3f bilhoes de reais \n", pib1);
    printf("numero de pontos turisticos: %d \n", numero_de_pontos_turisticos1);
    printf("densidade populacional: %.2f hab/km2 \n", densidade_populacional1);
    printf("pib percapita: %.2f \n", pib_per_capita1);
    printf("super poder: %.2f\n", super_poder1);

    printf("\n====================carta 2====================\n");
    printf("estado: %s \n",estado2);
    printf("codigo da carta: %s \n", codigo_da_carta2);
    printf("populacao: %d \n", populacao2);
    printf("area em km: %.3f km\n", area_em_km2);
    printf("pib: %.3f bilhoes de reais \n", pib2);
    printf("numero de pontos turisticos: %d \n", numero_de_pontos_turisticos2);
    printf("densidade populacional: %.2f hab/km2 \n", densidade_populacional2);
    printf("pib percapita: %.2f \n", pib_per_capita2);
    printf("super poder: %.2f\n", super_poder2);



return 0;
} 