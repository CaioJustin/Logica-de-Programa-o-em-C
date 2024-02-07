#include <stdio.h>


int main (){

 int number;
 int number2;
 int multi;
 int soma;

  printf("Digite o primeiro numero");
  scanf("%d",&number);

  printf("Digite o Segundo numero");
  scanf("%d",&number2);


soma= number+number2;
multi= number*number2;



printf("\nO Primeiro numero e :%d",number);
printf("\nO Segundo o numero e :%d",number2);
printf("\nA Soma e :%d",soma);
printf("\nA Multiplicacao e :%d",multi);

if (number > number2)
{
    printf("\nO Primeiro numero e maior!");
    printf("\nO Segundo numero e menor!");
}else{
    printf("\nO Segundo numero e maior!");
    printf("\nO Primeiro numero e menor");

}



    return 0;
}