#include <stdio.h>
#include <string.h>

int main()
{
    // ==========================================
    // DADOS DAS CARTAS
    // ==========================================

    char pais1[30] = "Brasil";
    char pais2[30] = "Argentina";

    int populacao1 = 203;
    int populacao2 = 46;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 2174.0;
    float pib2 = 640.0;

    int pontos_turisticos1 = 50;
    int pontos_turisticos2 = 30;

    float densidade1 = 23.8;
    float densidade2 = 16.5;


    // ==========================================
    // VARIÁVEIS
    // ==========================================

    char primeiroatributo;
    char segundoatributo;

    float valor1_atributo1 = 0;
    float valor2_atributo1 = 0;

    float valor1_atributo2 = 0;
    float valor2_atributo2 = 0;

    float soma1;
    float soma2;

    int resultado1 = 0;
    int resultado2 = 0;


    // ==========================================
    // PRIMEIRO ATRIBUTO
    // ==========================================

    printf("\n========================================\n");
    printf("       SUPER TRUNFO - PAISES\n");
    printf("========================================\n");

    printf("\nEscolha o primeiro atributo:\n");
    printf("A - Populacao\n");
    printf("B - Area\n");
    printf("C - PIB\n");
    printf("D - Pontos turisticos\n");
    printf("E - Densidade demografica\n");

    printf("\nEscolha: ");
    scanf(" %c", &primeiroatributo);


    switch (primeiroatributo)
    {
        case 'A':
        case 'a':
            printf("\nVoce escolheu: Populacao\n");

            valor1_atributo1 = populacao1;
            valor2_atributo1 = populacao2;

            resultado1 = valor1_atributo1 > valor2_atributo1 ? 1 : 0;
            break;


        case 'B':
        case 'b':
            printf("\nVoce escolheu: Area\n");

            valor1_atributo1 = area1;
            valor2_atributo1 = area2;

            resultado1 = valor1_atributo1 > valor2_atributo1 ? 1 : 0;
            break;


        case 'C':
        case 'c':
            printf("\nVoce escolheu: PIB\n");

            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;

            resultado1 = valor1_atributo1 > valor2_atributo1 ? 1 : 0;
            break;


        case 'D':
        case 'd':
            printf("\nVoce escolheu: Pontos turisticos\n");

            valor1_atributo1 = pontos_turisticos1;
            valor2_atributo1 = pontos_turisticos2;

            resultado1 = valor1_atributo1 > valor2_atributo1 ? 1 : 0;
            break;


        case 'E':
        case 'e':
            printf("\nVoce escolheu: Densidade demografica\n");

            valor1_atributo1 = densidade1;
            valor2_atributo1 = densidade2;

            // Na densidade, MENOR vence
            resultado1 = valor1_atributo1 < valor2_atributo1 ? 1 : 0;
            break;


        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }


    // ==========================================
    // SEGUNDO ATRIBUTO
    // MENU DINAMICO
    // ==========================================

    printf("\n========================================\n");
    printf("Escolha o segundo atributo.\n");
    printf("O primeiro atributo nao pode ser escolhido novamente.\n");
    printf("========================================\n");


    switch (primeiroatributo)
    {
        // Primeiro foi POPULACAO
        case 'A':
        case 'a':

            printf("B - Area\n");
            printf("C - PIB\n");
            printf("D - Pontos turisticos\n");
            printf("E - Densidade demografica\n");

            break;


        // Primeiro foi AREA
        case 'B':
        case 'b':

            printf("A - Populacao\n");
            printf("C - PIB\n");
            printf("D - Pontos turisticos\n");
            printf("E - Densidade demografica\n");

            break;


        // Primeiro foi PIB
        case 'C':
        case 'c':

            printf("A - Populacao\n");
            printf("B - Area\n");
            printf("D - Pontos turisticos\n");
            printf("E - Densidade demografica\n");

            break;


        // Primeiro foi PONTOS TURISTICOS
        case 'D':
        case 'd':

            printf("A - Populacao\n");
            printf("B - Area\n");
            printf("C - PIB\n");
            printf("E - Densidade demografica\n");

            break;


        // Primeiro foi DENSIDADE
        case 'E':
        case 'e':

            printf("A - Populacao\n");
            printf("B - Area\n");
            printf("C - PIB\n");
            printf("D - Pontos turisticos\n");

            break;
    }


    printf("\nEscolha: ");
    scanf(" %c", &segundoatributo);


    // ==========================================
    // IMPEDIR ATRIBUTO REPETIDO
    // ==========================================

    if (primeiroatributo == segundoatributo ||
        primeiroatributo == segundoatributo + 32 ||
        primeiroatributo == segundoatributo - 32)
    {
        printf("\nERRO: voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }


    // ==========================================
    // SEGUNDO ATRIBUTO
    // ==========================================

    switch (segundoatributo)
    {
        case 'A':
        case 'a':
            printf("\nSegundo atributo: Populacao\n");

            valor1_atributo2 = populacao1;
            valor2_atributo2 = populacao2;

            resultado2 = valor1_atributo2 > valor2_atributo2 ? 1 : 0;
            break;


        case 'B':
        case 'b':
            printf("\nSegundo atributo: Area\n");

            valor1_atributo2 = area1;
            valor2_atributo2 = area2;

            resultado2 = valor1_atributo2 > valor2_atributo2 ? 1 : 0;
            break;


        case 'C':
        case 'c':
            printf("\nSegundo atributo: PIB\n");

            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;

            resultado2 = valor1_atributo2 > valor2_atributo2 ? 1 : 0;
            break;


        case 'D':
        case 'd':
            printf("\nSegundo atributo: Pontos turisticos\n");

            valor1_atributo2 = pontos_turisticos1;
            valor2_atributo2 = pontos_turisticos2;

            resultado2 = valor1_atributo2 > valor2_atributo2 ? 1 : 0;
            break;


        case 'E':
        case 'e':
            printf("\nSegundo atributo: Densidade demografica\n");

            valor1_atributo2 = densidade1;
            valor2_atributo2 = densidade2;

            // Na densidade, MENOR vence
            resultado2 = valor1_atributo2 < valor2_atributo2 ? 1 : 0;
            break;


        default:
            printf("\nOpcao invalida!\n");
            return 0;
    }


    // ==========================================
    // SOMA DOS DOIS ATRIBUTOS
    // ==========================================

    soma1 = valor1_atributo1 + valor1_atributo2;
    soma2 = valor2_atributo1 + valor2_atributo2;


    // ==========================================
    // EXIBIR RESULTADO
    // ==========================================

    printf("\n\n========================================\n");
    printf("           RESULTADO DA COMPARACAO\n");
    printf("========================================\n");


    printf("\nCarta 1: %s\n", pais1);

    printf("Primeiro atributo: %.2f\n", valor1_atributo1);
    printf("Segundo atributo: %.2f\n", valor1_atributo2);
    printf("Soma dos atributos: %.2f\n", soma1);


    printf("\nCarta 2: %s\n", pais2);

    printf("Primeiro atributo: %.2f\n", valor2_atributo1);
    printf("Segundo atributo: %.2f\n", valor2_atributo2);
    printf("Soma dos atributos: %.2f\n", soma2);


    // ==========================================
    // RESULTADO DE CADA ATRIBUTO
    // ==========================================

    printf("\n========================================\n");
    printf("       COMPARACAO DOS ATRIBUTOS\n");
    printf("========================================\n");

    if (resultado1 == 1)
    {
        printf("Primeiro atributo: %s venceu!\n", pais1);
    }
    else if (valor1_atributo1 == valor2_atributo1)
    {
        printf("Primeiro atributo: Empate!\n");
    }
    else
    {
        printf("Primeiro atributo: %s venceu!\n", pais2);
    }


    if (resultado2 == 1)
    {
        printf("Segundo atributo: %s venceu!\n", pais1);
    }
    else if (valor1_atributo2 == valor2_atributo2)
    {
        printf("Segundo atributo: Empate!\n");
    }
    else
    {
        printf("Segundo atributo: %s venceu!\n", pais2);
    }


    // ==========================================
    // RESULTADO FINAL
    // ==========================================

    printf("\n========================================\n");
    printf("             RESULTADO FINAL\n");
    printf("========================================\n");

    if (soma1 > soma2)
    {
        printf("%s venceu!\n", pais1);
    }
    else if (soma2 > soma1)
    {
        printf("%s venceu!\n", pais2);
    }
    else
    {
        printf("Empate!\n");
    }

    printf("\nSoma de %s: %.2f\n", pais1, soma1);
    printf("Soma de %s: %.2f\n", pais2, soma2);

    return 0;
}