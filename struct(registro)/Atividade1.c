#include <stdio.h>
#include <stdlib.h>

struct dados
{
    char nome[100];
    int idade;
    float peso;
    float altura;
};



int main (){

struct dados Usuario;

printf("Digite o nome: ");
scanf("%s",&Usuario.nome);

printf("Digite a idade: ");
scanf("%d",&Usuario.idade);

printf("Digite o peso: ");
scanf("%f",&Usuario.peso);

printf("Digite a altura: ");
scanf("%f",&Usuario.altura);


system("cls");

printf("\nO nome e :%s",Usuario.nome);
printf("\nA Idade e :%d",Usuario.idade);
printf("\nO Peso e :%.1f",Usuario.peso);
printf("\nA Altura e :%.1f",Usuario.altura);

    return 0;
}