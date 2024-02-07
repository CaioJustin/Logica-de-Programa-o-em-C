#include <stdio.h>
#include <stdlib.h>


int main (){

char nome[100];
int nasc =0;
float nota1;
float nota2;
float nota3;
int soma;
int media;

printf("Digite o nome do aluno:\n");
gets(nome);

fflush(stdin);

printf("Digite o ano de nascimento do aluno:\n");
scanf("%d",&nasc);

nasc = 2023 - nasc;

printf("Digite a primeira nota do aluno:\n");
scanf("%f",&nota1);

printf("Digite a segunda nota do aluno:\n");
scanf("%f",&nota2);

printf("Digite a Terceira nota do aluno:\n");
scanf("%f",&nota3);

soma =nota1+nota2+nota3;
media =soma/3;


printf("\nO Nome e :%s",nome);
printf("\nVoce tem  %d Anos",nasc);
printf("\nA Soma e :%.1f",(float)soma);
printf("\nA Media e :%.1f",(float)media);

printf("\nA primeira nota e :%.1f",nota1);
printf("\nA Segundo Nota e :%.1f",nota2);
printf("\nA Terceita Nota e :%.1f",nota3);

switch (media)
{
case 0:
case 1 :
case 2 :
case 3 :
case 4 :
case 5 :
case 6:
  printf("\nReprovado");
   break;
case 7:
case 8:
case 9:
case 10:
  printf("\nAprovado");
  break;
default:
   printf("\nTente novamente");
    break;
}

 return 0;
}