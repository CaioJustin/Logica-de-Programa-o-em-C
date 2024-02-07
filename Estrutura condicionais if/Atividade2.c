#include <stdio.h>

int main (){

int numero;

    printf("Escreva um numero:\n");
    scanf("%d",&numero);


if (numero > 10)
{
    printf("\nO Numero e maior que 10!");
}else if (numero == 10)
{
    printf("o numero e igual a 10!");
}
else
{
    printf("o numero e menor que 10!");
}



    return 0;
}