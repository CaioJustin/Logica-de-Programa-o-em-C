#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){

char oper;
int num;
int num2;
int resultado;

setlocale(LC_ALL,"portugues");

printf("Digite a opera��o matematica escolhida:");
scanf("%c",&oper);

printf("Digite o primeiro numero:");
scanf("%d",&num);

printf("digite o segundo numero:");
scanf("%d",&num2);


system("cls");

printf("\nA opera��o escolhida e :%c",oper);
printf("\nO Primeiro numero e:%d",num);
printf("\nO Segundo numero e ;%d",num2);


switch (oper)
{
case '+':
     resultado = num+num2; 
     printf("\n O resultado e :%d",resultado);
   break;
case  '-':
     resultado = num-num2;
     printf("\n O resultado e :%d",resultado);
   break;
case '*':
     resultado = num*num2;
     printf("\n O resultado e :%d",resultado);
  break;
case '/':
     resultado=num/num2;  
     printf("\n O resultado e :%d",resultado);
  break;
default:
     printf("\nEssa op��o n�o existe");
    break;
}




    return 0;
}