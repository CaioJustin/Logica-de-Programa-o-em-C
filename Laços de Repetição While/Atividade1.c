#include <stdio.h>
#include <stdlib.h>

int main (){

int nota;

do
{
    printf("\nDigite a nota:");
    scanf("%d",&nota);


} while (nota < 0 || nota > 10);


printf("\nA Nota e %d",nota);

    return 0;
}