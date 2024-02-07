#include <stdio.h>
#include <stdlib.h>

struct dateperso
{
    char nome[100];
    char endereco[100];
    int idade;

};

struct dateperso people;

int main(){

printf("\nDigite o nome:");
gets(people.nome);

printf("\nDigite o endereco:");
gets(people.endereco);

fflush(stdin);

printf("\nA Idade e:");
scanf("%d",&people.idade);

system("cls");


printf("\n O Nome e: %s",people.nome);
printf("\n A Idade e :%d",people.idade);
printf("\n O Endereco e :%s",people.endereco);
    
    return 0;
}