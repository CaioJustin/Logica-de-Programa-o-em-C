#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
int numero;
int soma=0;

for ( i = 1; i < 6; i++)
{
    printf("\nDigite o %d numero:",i);
    scanf("%d",&numero);
     
      soma+=numero;

}

printf("\n A Soma e :%d",soma);


    return 0;
}