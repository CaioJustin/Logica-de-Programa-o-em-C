#include <stdio.h>

#define k 5

struct dados
{
    char nome[100];
    char data[100];
    char rg[100];
    char cpf[100];
};


int main(){

struct dados user[5];
int i;

for ( i = 0; i < k; i++)
{
    printf("\nDigite o nome do usuario:");
    gets(user[i].nome);

    printf("Digite a data de nascimento do usuario:");
    gets(user[i].data);

    printf("Digite o rg do usuario:");
    gets(user[i].rg);

    printf("Digite o cpf do usuario:");
    gets(user[i].cpf);
}

for ( i = 0; i <k; i++)
{
    printf("\n=========================================");
    printf("\nO Nomde do usuario e :%s",user[i].nome);
    printf("\na data de nascimento: %s ",user[i].data);
    printf("\nO Rg do usuario e :%s",user[i].rg);
    printf("\nO cpf do usuario e :%s",user[i].cpf); 
    printf("\n=========================================");


}

    return 0;
}