#include <stdio.h>

#define k 5

int main (){

int i ;
int nota[5];
int maior=0;
int menor=99999999;


for ( i = 0; i < k; i++)
{
    printf("\nDigite a %d nota:",i+1);
    scanf("%d",&nota[i]);

    if (nota[i] >maior)
    {
        maior=nota[i];
    }
    
   
    if ( nota[i] < menor)
    {
        menor=nota[i];
    }
    

}




for ( i = 0; i < k; i++)
{
    printf("\nOs Numeros informados sao :%d",nota[i]);
}



printf("\nO maior numero e :%d",maior);
printf("\nA Menor numero e :%d",menor);

    return 0;
}