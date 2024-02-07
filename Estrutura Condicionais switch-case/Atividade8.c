#include <stdio.h>


int main (){


int numero;

printf("\nDigite um numero :");
scanf("%d",&numero);


switch (numero)
{
case 0:    
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
    printf("\nE Menor que 10!");
    break;
default:
   printf("\nE Maior que 10!");
    break;
}




    return 0;
}