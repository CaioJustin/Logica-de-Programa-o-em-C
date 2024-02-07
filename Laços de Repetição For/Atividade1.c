#include <stdio.h>
#include <stdlib.h>


int main (){

int numero;
int i;

printf("\nEscreva um numero:");
scanf("%d",&numero);


for ( i = 0; i < 11; i++)
{
    printf("\n%d*%d = %d",numero,i,numero*i);
}





    return 0;
}