#include <stdio.h>

#define k 6

int main (){

int i ;
int num[6] ;
int par=0;
int impar=0;

for ( i = 0; i < k; i++)
{
    printf("\nDigite o %d numero:",i+1);
    scanf("%d",&num[i]);

    if (num[i] % 2 ==0)
    {
        par++;
    }else{
        impar++;
    }
    
}

for ( i = 0; i < k; i++)
{
    printf("\nO %d numero e : %d",i+1,num[i]);
    
    
}

printf("\n a quantidade de numero e par e:%d",par);
printf("\n a quantidade de numero e impar e:%d",impar);
    return 0;
}