#include <stdio.h>
#include <stdlib.h>

int main(){

float nota1;
float nota2;
float soma;
float media;
char con;

printf("\nDigite a primeira nota:");
scanf("%f",&nota1);

printf("\nDigite a Segunda nota");
scanf("%f",&nota2);

soma= nota1+nota2;
media= soma/2;


printf("\nA soma e :%f",soma);
printf("\nA media e :%f",media);

if ( media >= 9)
{
    con= 'A';
}else if (media  >= 7.5 && media < 9)
{
    con='B';
}else if (media >= 6 && media <7.5)
{
    con= 'C';
}else if (media >= 4 && media < 6)
{
    con='D';
}else
{
    con='E';
}

printf("\nO Conceito e :%c",con);

if (con == 'A' ||con == 'B' ||con == 'C' )
{
    printf("\nAprovado");
}else{
    printf("\nReprovado");
}





    return 0;
}