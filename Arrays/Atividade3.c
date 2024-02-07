#include <stdio.h>

#define k 4

int main(){

int i;
float nota[4];
float soma;
float media;

for ( i = 0; i < k; i++)
{
    printf("Digita a %d nota:",i+1);
    scanf("%f",&nota[i]);

    soma+=nota[i];
    media=soma/i;
}
    

if (media >= 7)
{
    printf("\nAprovado");
}else if (media >= 5)
{
    printf("\nRecuperacao");
}else if (media < 5)
{
    printf("\nReprovado");
}

for ( i = 0; i < k; i++)
{
    printf("\nA %d nota e :%.1f",i+1,nota[i]);
}

printf("\nA media e :%.1f",media);


    return 0;
}