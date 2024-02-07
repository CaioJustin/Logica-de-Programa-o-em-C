#include <stdio.h>

#define k 5

int main(){

int i;
char nome[5][100];
int idade[5];

for ( i = 0; i < k; i++)
{

    printf("\nDigite o nome da %d pessoa:",i+1);
    gets(nome[i]);


    printf("\nDigite a idade da %d pessoa:",i+1);
    scanf("%d",&idade[i]);

    fflush(stdin);
}

for ( i = 0; i < k; i++)
{
    printf("\nO %d pessoa e :%s",i+1,nome[i]);
    printf("\na idade %d pessoa e :%d",i+1,idade[i]);
}



    return 0;
}