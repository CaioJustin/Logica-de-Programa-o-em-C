#include <stdio.h>

#define m 3
#define b 2

struct dadosaluno
{
   char nome[100];
   float nota[2];
   int idade;
};


int main (){

struct dadosaluno aluno[3];
int i=0;
int j;

for ( i = 0; i < m; i++)
{
    printf("\n========================================");
    printf("\nDigite o nome do %d aluno:",i+1);
    gets(aluno[i].nome);

    fflush(stdin);

    printf("\nDigite a idade do aluno:");
    scanf("%d",&aluno[i].idade);

        fflush(stdin);


    for ( j = 0; j <b; j++)
    {
        printf("\nDigite a %d nota :",j+1);
        scanf("%f",&aluno[i].nota[j]);
    }
            fflush(stdin);
    
}


for ( i = 0; i <m; i++)
{
    printf("\n========================================");
    printf("\no nome do aluno e:%s",aluno[i].nome);
    printf("\na idade do aluno e:%d",aluno[i].idade);

    for ( j = 0; j < b; j++)
    {
        printf("\n a nota %d e :%.1f",j+1,aluno[i].nota[j]);
    }
    printf("\n========================================");
}




    return 0;
}