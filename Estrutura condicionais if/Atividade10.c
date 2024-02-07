#include <stdio.h>


int main (){


int quant;
float valor;

printf("Digite a Quantidade de maca:");
scanf("%d",&quant);

if (quant >= 13)
{
    valor= quant*1.00;
}else{
    valor= quant*1.30;
}


printf("O Valor total e :%.1f",valor);

    return 0;
}