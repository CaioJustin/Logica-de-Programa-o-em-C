#include <stdio.h>
#include <ctype.h>


int main (){

char sexo;
float altura;
float Pesoideal;

 printf("Digite o seu sexo :");
 scanf("%c",&sexo);

sexo=toupper(sexo);

 printf("Digite a sua altura");
 scanf("%f",&altura);

switch (sexo)
{
case 'M':
    Pesoideal = (72.7 * altura) - 58;
    printf("O Pesoideal e %.1f",Pesoideal);
    break;
case 'F':
    Pesoideal = (62.1 *altura) -44.7;
    printf("O Pesoideal e %.1f",Pesoideal);
    break;
default:
    printf("None");
    break;
}



printf("\nO Sexo e :%c",sexo);

    return 0;
}