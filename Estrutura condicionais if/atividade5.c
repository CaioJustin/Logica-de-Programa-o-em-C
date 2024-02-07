#include <stdio.h>

int main (){

int numero;
int numero2;
int soma;
int multi;

printf("\nDIGITE O PRIMEIRO NUMERO");
scanf("%d",&numero);

printf("\nDIGITE O SEGUNDO NUMERO");
scanf("%d",&numero2);


soma= numero+numero2;
multi= soma/3;


printf("\nO Primero numero e :%d",numero);
printf("\nO Segundo numero e :%d",numero2);
printf("\n A Soma e :%d",soma);
printf("\nA Multiplicacao e :%d",multi);

if (numero > numero2)
{
    printf("\nO Primeiro numero e maior!");
    printf("\nO Segundo numero e menor!");
}else if  (numero2 > numero){
    printf("\nO Segundo numero e maior!");
    printf("\nO Primeiro numero e menor!");
}else{
    printf("\nEles sao iguais");
}



    return 0;
}