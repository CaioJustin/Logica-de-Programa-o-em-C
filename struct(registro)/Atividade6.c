#include <stdio.h>

#define m 3
#define n 2
struct datealuno
{
    char nome[100]; 
    int idade; 
    float nota[2]; 
    float media; 
};


int main (){


struct datealuno aluno[3];
int i;
int j;
float soma=0;

for ( i = 0; i < m; i++)
{
    printf("\nDigite o nome do %d aluno:",i+1);
    gets(aluno[i].nome);

    fflush(stdin);

    printf("\nDigite a idade do aluno:");
    scanf("%d",&aluno[i].idade);

    for ( j = 0; j < n; j++)
    {
        printf("\nDigite a %d nota:",j+1);
        scanf("%f",&aluno[i].nota[j]);

        soma+=aluno[i].nota[j];
        aluno[i].media=soma/n;
        soma=0;
    }
        fflush(stdin);
}

for ( i = 0; i < m; i++)
{
    printf("\nDigite o nome do aluno:%s",aluno[i].nome);
    printf("\nA idade do aluno:%d",aluno[i].idade);

    for ( j = 0; j < n; j++)
    {
        printf("\nA %d nota:%.1f",j+1,aluno[i].nota[j]);
    }
    printf("\nA media e :%.1f",aluno[i].media);
}


    return 0;
}