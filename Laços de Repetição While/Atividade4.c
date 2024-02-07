#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main (){

char resp;
float nota;
int i=0;
float media;
float soma=0;


do
{

printf("\nDigite uma nota:");
scanf("%f",&nota);

    fflush(stdin);

 printf("\nInseri mais uma nota?");
scanf("%c",&resp);
  
resp=toupper(resp);

i++;

soma+=nota;
media= soma/i;


} while (resp != 'N');




printf("\nA soma das notas e :%.1f",soma);
printf("\nA meida da Somas e :%.1f",media);


    return 0;
}