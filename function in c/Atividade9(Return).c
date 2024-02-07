#include <stdio.h>

float soma(float nota[]){
    float media;
    int i;
    float soma=0;
    for ( i = 0; i < 3; i++)
    {
        soma+=nota[i];
    }
    
    media=soma/3;

    return (media);
}

int main (){

int i;
float nota[3];
float media;

for ( i = 0; i < 3; i++)
{
    printf("\nDigite a %d nota:",i+1);
    scanf("%f",&nota[i]);

}


media=soma(nota);

printf("\nA Media e :%.1f",media);

    return 0;
}