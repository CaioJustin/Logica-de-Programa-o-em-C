#include <stdio.h>


int main (){

int codigo;
int idade;
int tt;

printf("\nDigite o codigo do empregado");
scanf("%d",&codigo);

printf("\nDigite a Idade do Empregado");
scanf("%d",&idade);

printf("\nDigite o tempo de trabalho");
scanf("%d",&tt);

if (idade >= 30 || tt >=65)
{
    printf("\nREQUERER APOSENTADORIA");
}else{
    printf("\nNAO REQUERER");
}




    return 0;
}