#include <stdio.h>
#include <stdlib.h>


int main (){


int i;
int numero;
int par=0;
int impar=0;


for ( i = 1; i < 6; i++)
{
    printf("Digite o %d numero:",i);
    scanf("%d",&numero);

    if (numero % 2 ==0)
    {
        par++;
    }else{
        impar++;
    }
    

}

  printf("\nA Quantidade de par e :%d",par);

  printf("\n A Quantidade de impares e :%d",impar);

    return 0;
}