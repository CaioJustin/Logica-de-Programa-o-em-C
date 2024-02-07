#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main (){

char form;
float preco;
float desc;
float dect;
int parc;
float ppp;


printf("\nLetra  Form of payment");
printf("\nV     Avista");
printf("\nP     Prazo");


printf("\nDigite a Forma de pagameto obedecendo a tabela a cima:");
scanf("%c",&form);

form=toupper(form);

fflush(stdin);

printf("\nDigite o Valor do Produto:");
scanf("%f",&preco);

switch (form)
{
case 'V':
    desc= preco-(preco * 10/100);
    dect=preco*0.1;
    printf("\n O valor do Produto e :%.1f",preco);
    printf("\n A Forma de Pagamento e a vista");
    printf("\n O Total do desconto e :%.1f",dect);
    printf("\n O Preco com Desconto e :%.1f",desc);
    break;
case 'P':
  printf("\nDigite a Quantidade de parcela entre 1 e  6");
  scanf("%d",&parc);
  printf("\n O Valor do Produto e :%.1f",preco);
  printf("\n A Forma de Pagamento e a Prazo");
  printf("\n A Quatidade de Parcelas e :%d",parc);
  ppp= preco/parc;
  printf("\n O Preço por Parcela e :%.1f",ppp);
  break;
default:
  printf("Letra errado tente Novamente");
    break;
}



    return 0;
}