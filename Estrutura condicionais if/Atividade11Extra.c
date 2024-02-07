#include <stdio.h>


int main( ){


char sex;
float alt;
float pesoideal;

printf("\nDigite o seu Sexo (F para mulheres e M para Masculino):");
scanf("%c",&sex);

printf("\n Digite a sua altura:");
scanf("%f",&alt);


sex=toupper(sex);


if (sex == "F")
{
    pesoideal=(72.7*alt)-58;
}else{
    pesoideal=(62.1*alt)-44.7;
}



printf("\nO Seu sexo e:%c",sex);
printf("\nO Seu PesoIdeal e :%f",pesoideal);


    return 0;
}