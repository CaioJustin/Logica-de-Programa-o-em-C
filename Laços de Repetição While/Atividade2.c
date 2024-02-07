#include <stdio.h>
#include <stdlib.h>


int main (){

float nota;
float nota1;
float soma;
float media;

do
{
    printf("Digite a primeira nota:");
    scanf("%f",&nota);

    printf("Digite a Segunda nota:");
    scanf("%f",&nota1);

    soma= nota+nota1;
    media=soma/2;

} while (media < 0 || media > 10);


    printf("\nA nota e : %.1f ",nota);
    printf("\nA nota e : %.1f ",nota1);
    printf("\n A Soma e :%.1f",soma);
    printf("\nA Media e : %.1f",media);




    return 0;
}