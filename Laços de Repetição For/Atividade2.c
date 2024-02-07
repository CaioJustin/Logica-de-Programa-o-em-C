#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
int numero;


 printf("Digite um numero(entre 100 e 200)");
 scanf("%d",&numero);

for ( i = 100; i < 200; i+=2)
{
    printf("\n%d",i);
}



    return 0;
}