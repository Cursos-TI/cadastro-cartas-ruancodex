#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {

   int resultado1, resultado2;
   char primeiroatributo, segundoatributo;
   int ataque1, ataque2, defesa1, defesa2, recuo1, recuo2;

   //gerar numero aleatorio 
   srand(time(0));
   ataque1 = 0;   rand() % 100 + 1;  //numero entre 1 e 100
   ataque2 = 0;   rand() % 100 + 1;  //numero entre 1 e 100
   defesa1 = 0;   rand() % 100 + 1;  //numero entre 1 e 100
   defesa2 = 0;   rand() % 100 + 1;  //numero entre 1 e 100
   recuo1  = 0;   rand() % 100 + 1;  //numero entre 1 e 100
   recuo2  = 0;   rand() % 100 + 1;  //numero entre 1 e 100

//inicio do jogo
    printf("\n========================================bem vindo ao jogo de cartas super trunfo!==================================================\n");
    printf("escolha o primeiro atributo.\n");
    printf("A. ataque\n");
    printf("B. defesa\n");
    printf("C. recuo\n");


    printf("escolha a comparacao:");
    scanf(" %c", &primeiroatributo);

    switch (primeiroatributo)
    {
    case 'A':
    case 'a':
           printf("voce escolheu o atributo ataque\n");
           resultado1 = ataque1 > ataque2 ? 1:0;
        break;
    case 'B':
    case 'b':
           printf("voce escolheu o atributo defesa\n");
           resultado1 = defesa1 > defesa2 ? 1:0;
        break;
    case 'C':
    case 'c':
           printf("voce escolheu o atributo recuo\n");
           resultado1 = recuo1 > recuo2 ? 1:0;
        break;
    
    
    default:
          printf("opcao invalida!");
        break;
    }

    printf("escolha o segundo atributo!\n");
    printf("atencao voce deve escolhe um atributo diferente do primeiro.\n");
    printf("A. ataque\n");
    printf("B. defesa\n");
    printf("C. recuo\n");

    printf("escolha o segundo atributo:");
    scanf(" %c", &segundoatributo);

    if (primeiroatributo == segundoatributo){
        printf("voce escolheu o mesmo atributo\n");
    } else 
         {switch (segundoatributo)
    {
    case 'A':
    case 'a':
       printf("voce escolheu o atributo ataque\n");
         resultado2 = ataque2 > ataque1 ? 1:0;
        break;
    case 'B':
    case 'b':
       printf("voce escolheu o atributo defesa\n");
         resultado2 = defesa2 > defesa1 ? 1:0;
        break;
    case 'C':
    case 'c':
       printf("voce escolheu o atributo recuo\n");
         resultado2 = recuo2 > recuo1 ? 1:0;
        break;
    
    default:
    printf("opcao invalida!");
        break;
    }
         }









}