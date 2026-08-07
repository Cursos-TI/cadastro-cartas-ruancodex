#include <stdio.h>

int main() {

// carta 1
char estado1[50];
char codigo_da_carta1[50];
int populacao1;
double area_em_km1;
double pib1;
int numero_de_pontos_turisticos1;
double densidade_populacional1, pib_per_capita1, inverso_da_densidade_populacional1;
double super_poder1;

// carta 2
char estado2[50];
char codigo_da_carta2[50];
int populacao2;
double area_em_km2;
double pib2;
int numero_de_pontos_turisticos2;
double densidade_populacional2, pib_per_capita2, inverso_da_densidade_populacional2;
double super_poder2;

// ===========================Entrada de dados carta 1===============================================

printf("informacoes da carta 1\n");

printf("digite o estado da carta 1:\n");
scanf("%49s", estado1);

printf("digite o codigo da carta 1:\n");
scanf("%49s", codigo_da_carta1);

printf("digite a populacao:\n");
scanf("%d", &populacao1);

printf("digite a area em km:\n");
scanf("%lf", &area_em_km1);

printf("digite o pib:\n");
scanf("%lf", &pib1);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &numero_de_pontos_turisticos1);

printf("carta 1 completa!\n");

//================================Entrada de dados carta 2===============================================

printf("\ninformacoes da carta 2\n");

printf("digite o estado da carta 2:\n");
scanf("%49s", estado2);

printf("digite o codigo da carta 2:\n");
scanf("%49s", codigo_da_carta2);

printf("digite a populacao:\n");
scanf("%d", &populacao2);

printf("digite a area em km:\n");
scanf("%lf", &area_em_km2);

printf("digite o pib:\n");
scanf("%lf", &pib2);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &numero_de_pontos_turisticos2);

printf("carta 2 completa!\n");

//================================Cálculos============================================================

densidade_populacional1 = populacao1 / area_em_km1;
densidade_populacional2 = populacao2 / area_em_km2;

// O PIB é informado em bilhões de reais.
// Multiplicamos por 1 bilhão para obter o PIB per capita em reais.
pib_per_capita1 = (pib1 * 1000000000.0) / populacao1;
pib_per_capita2 = (pib2 * 1000000000.0) / populacao2;

inverso_da_densidade_populacional1 = area_em_km1 / populacao1;
inverso_da_densidade_populacional2 = area_em_km2 / populacao2;

super_poder1 = populacao1 + area_em_km1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 +inverso_da_densidade_populacional1;

super_poder2 = populacao2 + area_em_km2 + pib2 +numero_de_pontos_turisticos2 + pib_per_capita2 + inverso_da_densidade_populacional2;

//==================================== Exibição da carta 1===============================================

printf("\n==================== CARTA 1 ====================\n");
printf("Estado: %s\n", estado1);
printf("Codigo da carta: %s\n", codigo_da_carta1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.3lf km²\n", area_em_km1);
printf("PIB: %.3lf bilhoes de reais\n", pib1);
printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos1);
printf("Densidade populacional: %.2lf hab/km²\n", densidade_populacional1);
printf("PIB per capita: R$ %.2lf\n", pib_per_capita1);
printf("Super poder: %.2lf\n", super_poder1);

// ======================================Exibição da carta 2=========================================================

printf("\n==================== CARTA 2 ====================\n");
printf("Estado: %s\n", estado2);
printf("Codigo da carta: %s\n", codigo_da_carta2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.3lf km²\n", area_em_km2);
printf("PIB: %.3lf bilhoes de reais\n", pib2);
printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
printf("Densidade populacional: %.2lf hab/km²\n", densidade_populacional2);
printf("PIB per capita: R$ %.2lf\n", pib_per_capita2);
printf("Super poder: %.2lf\n", super_poder2);

//============================================menu de opcoes============================================================

int opcao;

printf("menu de opcoes:\n");
printf("1. comparar populacao\n");
printf("2. comparar area\n");
printf("3. comparar pib\n");
printf("4. comparar pontos turisticos\n");
printf("5. comparar densidade populacional\n");
printf("6. comparar pib per capita\n");
printf("7. comparar super poder\n");

printf("escolha uma opcao: ");
scanf("%d", &opcao);

//=========================comparacao das cartas com base na opcao escolhida=======================

switch (opcao)
{
case 1:
    printf("\ncomparando populacao:\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 2:
    printf("\ncomparando area:\n");
    if (area_em_km1 > area_em_km2) {
        printf("Carta 1 venceu!\n");
    } else if (area_em_km2 > area_em_km1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 3:
    printf("\ncomparando pib:\n");
    if (pib1 > pib2) {
        printf("Carta 1 venceu!\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 4:
    printf("\ncomparando pontos turisticos:\n");
    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
        printf("Carta 1 venceu!\n");
    } else if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 5:
    printf("\ncomparando densidade populacional:\n");
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 venceu!\n");
    } else if (densidade_populacional2 < densidade_populacional1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 6:
    printf("\ncomparando pib per capita:\n");
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu!\n");    
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 7:
    printf("\ncomparando super poder:\n");
    if (super_poder1 > super_poder2) {
        printf("Carta 1 venceu!\n");
    } else if (super_poder2 > super_poder1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
    break;

default:
    printf("opcao invalida!\n");
    break;
}

    return 0;
}
