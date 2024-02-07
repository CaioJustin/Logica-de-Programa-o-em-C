#include <stdio.h>
#include <locale.h>

int main (){

int dia;
setlocale(LC_ALL, "Portuguese");

printf("\nDigite um numero(referente a um dia da semana)");
scanf("%d",&dia);

switch (dia)
{
case 1:
case 7:
     printf("\nDia não util");
     break;
case 6:
case 5:
case 4:
case 3:
case 2:   
     printf("\nDia Util");
     break;
default:
     printf("\nDia não Existente");
    break;
}






    return 0;
}