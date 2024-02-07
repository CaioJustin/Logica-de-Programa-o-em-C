#include <stdio.h>

#define k 3
#define l 2

int main (){

int i=0;
int j=0;
char nome[2][100];
float nota[2][3];

for ( i = 0; i < l; i++)
{
    printf("\nO Nome do %d aluno e :",i+1);
    gets(nome[i]);

    for ( j = 0; j < k; j++)
    {
        printf("\n%d nota :",j+1);
        scanf("%f",&nota[i][j]);
    }
    fflush(stdin);
}

for ( i = 0; i < 2; i++)
{

    printf("\nO Nome do aluno e:%s",nome[i]);

    for ( j = 0; j < 3; j++)
    {
        printf("\nA %d nota :%.1f",j+1,nota[i][j]);
    }
    
}



    return 0;
}