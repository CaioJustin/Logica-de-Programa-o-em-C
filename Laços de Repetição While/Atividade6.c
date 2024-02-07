#include <stdio.h>
#include <Stdlib.h.>

int main (){

int num;
int i=0;
int soma=0;
int media;
int par=0;
int impar=0;
int parx;

while (num > 0)
{
      printf("\nDigite o %d numero:",i+1);
    scanf("%d",&num);

    i++;
    soma+=num;
    media=(float)soma/(i-1);    

    if (num % 2 ==0)
    {
        par++;
        parx=soma/(2*par);
    }else{
        impar++;
    }
    


    if (num == 0)
    {
        break;
    }
}



printf("\nA Soma e :%d",soma);
printf("\nA Media e :%d",media);
printf("\nA Quantidade de numero par e :%d",par);
printf("\nA Quantidade de numero impar e :%d",impar);
printf("\nA Media de par e :%d",parx);
printf("\nQuantidade de loop:%d",i);

    return 0;
}