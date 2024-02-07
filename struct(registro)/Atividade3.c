#include <stdio.h>
#include <stdlib.h>

#define k 3

struct datebook
{
    char nome[100];
    char autor[100];
    char categor[100];
    float preco;
};

int main (){

int i;

struct datebook info[3];

for ( i = 0; i < 1; i++)
{
    printf("Digite o nome:");
    gets(info[i].nome);

    printf("Digite o nome do autor:");
    gets(info[i].autor);

    printf("Digite a categoria:");
    gets(info[i].categor);

    fflush(stdin);

   printf("Digite o preco");
   scanf("%f",&info[i].preco);

}

system("cls");

for ( i = 0; i < k; i++)
{
    printf("\nDigite o nome :%s",info[i].nome);
    printf("\nDigite o nome do autor :%s",info[i].autor);
    printf("\nDigite a categoria do livro :%s",info[i].categor);
    printf("\nDigite o preco do nome :%.1f",info[i].preco);
}



    return 0;
}