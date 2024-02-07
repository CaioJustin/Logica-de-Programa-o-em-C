#include <stdio.h>


int main(){

int numero;

printf("\nEscreva um numero:\n");
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
    printf("\nO Numero e menor que 10!");
    break;
case 10:
     printf("\nO Numero e igual a 10!");
     break;
default:
    printf("\nO Numero e Maior que 10!");
    break;
}


    return 0;
}