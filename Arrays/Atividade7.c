#include <stdio.h>

#define k 10

int main (){

int num[10];
int i ;
int pos=0;
int neg=0;
int som=0;

for ( i = 0; i < k; i++)
{
    printf("\nDigite o %d numero:",i+1);
    scanf("%d",&num[i]);

    if (num[i] >0)
    {
        pos++;
        som+=pos;
    }else{
        neg++;
    }
    

}

printf("\n a quantidade de numero positivo e :%d",pos);
printf("\n a a soma dos numeros e :%d",som);
printf("\n a quantidade de numero negativo e  :%d",neg);

    return 0;
}