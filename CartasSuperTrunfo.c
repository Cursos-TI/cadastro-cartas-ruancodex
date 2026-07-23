#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    // Área para definição das variáveis para armazenar as propriedades das cidades
    
    //carta 1 
    char estado1[50];
    char codigo_da_carta1[50]; 
    int populacao1;
    float area_em_km1;
    float pib1;
    int numero_de_pontos_turisticos1;

    //carta 2
    char estado2[50];
    char codigo_da_carta2[50];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numero_de_pontos_turisticos2;


   // Área para entrada de dados
    printf ("informacoes da carta 1 \n");
    printf ("digite o estado da carta: \n");
    scanf  ("%49s",estado1);
    printf ("digite o codigo da carta: \n");
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
    printf ("digite o estado da carta: \n");
    scanf  ("%49s",estado2);
    printf ("digite o codigo da carta: \n");
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


    // Área para exibição dos dados da cidade

    printf("carta 1 \n");
    printf("estado: %s \n",estado1);
    printf("codigo da carta: %s \n",codigo_da_carta1);
    printf("populacao: %d \n",populacao1);
    printf("area em km: %.2f \n",area_em_km1);
    printf("pib em ral: %.2f \n",pib1);
    printf("numero de pontos turisticos: %d \n",numero_de_pontos_turisticos1);



    printf("carta 2 \n");
    printf("estado: %s \n",estado2);
    printf("codigo da carta: %s \n",codigo_da_carta2);
    printf("populacao: %d \n",populacao2);
    printf("area em km: %.2f \n",area_em_km2);
    printf("pib em real: %.2f \n",pib2);
    printf("numero de pontos turisticos: %d \n",numero_de_pontos_turisticos2);

return 0;
} 
