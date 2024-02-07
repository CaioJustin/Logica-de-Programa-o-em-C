#include <stdio.h>

#define k 3
#define l 2

int main (){

int i ;
int j ;
char mater[2][100];
float nota[2][3];
float soma=0;
float media[2];


for ( i = 0; i < l; i++)
{
    printf("Digite o nome da Materia:");
    gets(mater[i]);

    for ( j = 0; j < k; j++)
    {
        printf("\nDigite a %d nota: ",j+1);
        scanf("%f",&nota[i][j]);

            soma+=nota[i][j];
            media[i]=soma/k;
    }
    
    soma=0;

    fflush(stdin);
}



for ( i = 0; i < l; i++)
{
    printf("\n\nMateria :%s",mater[i]);

    for ( j = 0; j < k; j++)
    {
        printf("\nNota %d :%.1f",j+1,nota[i][j]);

    }
    
    printf("\nA media e :%.1f",media[i]);

   
}



    return 0;
}