#include <stdio.h>
#include <stdlib.h>

int main (){

    char nome [20];
    float nota1;
    float nota2;
    float nota3;
    int idade;
    float soma;
    float media;
    
printf("Escreva o nome de um aluno\n");
    gets(nome);
    
    fflush(stdin);
    
    printf("\nDigite a Sua Idade em anos:\n");
    scanf("%d",&idade);

    printf("\nEscreva a primeira nota\n");
    scanf("%f",&nota1);
    
    printf("\nEscreva a segunda nota\n");
    scanf("%f",&nota2);

    printf("\nEscreva a terceira nota\n");
    scanf("%f",&nota3);

  soma = nota1+ nota2+nota3;
  media= soma/3;





printf("\n====INFORMACOES DOS ALUNOS====");
printf("\nO Nome do Aluno e :%s",nome);
printf("\n voce tem %d anos",idade);
printf("\nA Primeira Nota do Aluno e :%.1f",nota1);
printf("\nA Segunda Nota do Aluno e :%.1f",nota2);
printf("\nA Terceira Nota do Aluno e :%.1f",nota3);
printf("\n A Soma e :%f",soma);
printf("\n A Media e :%f",media);
   
   if (media >= 7)
   {
    printf("\nAprovado");
   }else{
    printf("\nReprovado");
   }
   
   
    return 0;
}