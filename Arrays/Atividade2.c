#include <stdio.h>

#define k 3

int main (){

int i;
float num[3];
float soma;
float media;


for ( i = 0; i < k; i++)
{
    printf("Digite a %d nota:",i+1);
    scanf("%f",&num[i]);

    soma+=num[i];
    media=(float)soma/k;
}

for ( i = 0; i < k; i++)
{
    printf("\nAs notas digitadas sao:%.1f",num[i]);
}

printf("\nA Soma e :%.1f",soma);
printf("\nA media e :%.1f",media);



    return 0;
}