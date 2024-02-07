#include <stdio.h>

#define k 2
#define l 3

int main (){

float nota[2][3];
char nome[2][100];
int i;
int j;
float media[2];
float soma[2];

for ( i = 0; i < k; i++)
{
    printf("O nome do %d aluno e :",i+1);
    gets(nome[i]);

    for ( j = 0; j < l; j++)
    {
        printf("\nDigite a %d nota:",j+1);
        scanf("%f",&nota[i][j]);

        soma[i]=nota[i][j];
        media[i]=soma[i]/l;
    }
    fflush(stdin);
}

for ( i = 0; i < k; i++)
{
    printf("\n%s",nome[i]);

    for ( j = 0; j < l; j++)
    {
        printf("\nA Nota %d e :%.1f",j+1,nota[i][j]);

    }
    
    printf("\nA Soma e :%.1f",soma[i]);
    printf("\nA media e :%.1f",media[i]);
}



    return 0;
}