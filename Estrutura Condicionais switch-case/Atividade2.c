#include <stdio.h>
#include <locale.h>

int main (){

setlocale(LC_ALL,"Portuguese");
int codigo;

printf("\n___________________________________");
printf("\n|Codigo  |   Prato     |     Valor|");
printf("\n|1       |   Lasanha   |     20.00|");
printf("\n|2       |   Hamburguer|     15.00|");
printf("\n|3       |   Picanha   |     50.00|");
printf("\n|4       |   Gororoba  |     32.00|");
printf("\n|5       |   Mechil�o  |     26.67|");
printf("\n|6       |   Comich�o  |     24.47|");
printf("\n|7       |   S�i l�    |     10.00|");
printf("\n|_________________________________|");


printf("\nEscolha a op��o(Digite o codigo)");
scanf("%d",&codigo);


switch (codigo)
{
case 1:
    printf("\nCodigo   :1 ");
    printf("\nComida   :Lasanha");
    printf("\nValor    : 20.00");
    break;
case 2:
      printf("\nCodigo : 2  ");
      printf("\nComida : Hamburguer");
      printf("\nValor  : 15.00");
       break;
case 3: 
     printf("\nCodigo :3");
     printf("\nComida : Picanha");
     printf("\nvalor  : 50.00");
     break;
case 4:
    printf("\nCodigo  :4");
    printf("\nComida  : Gororoba");
    printf("\nValor   : 32.00");
break;
case 5:
    printf("\nCodigo  :5");
    printf("\nComida  : Mechil�o");
    printf("\nValor   : 26.67");
break;
case 6:
    printf("\nCodigo  : 6");
    printf("\n Comida : Comich�o");
    printf("\nValor   : 24.47");
break;
case 7:
    printf("\nCodigo  :7");
    printf("\nComida  :S�i l�");
    printf("\nValor   :10.00");
break;
default:
    printf("\nIsso n�o existe");
    break;
}


    return 0;
}