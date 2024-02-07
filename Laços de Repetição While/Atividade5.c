#include <stdio.h>


int main (){

int i=0;
float nota;
float media;
float soma=0;

do
{
    printf("Digite o %d valor:",i+1);
    scanf("%f",&nota);

    i++;

    soma+=nota;
    media= soma/i;

} while (nota > 0);

printf("a media e :%f",media);


    return 0;
}