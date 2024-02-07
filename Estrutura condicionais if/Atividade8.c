#include <stdio.h>


int main () {

int num1;
int num2;
int num3;

printf("\nDigite o primeiro numero:");
scanf("%d",&num1);

printf("\nDigite o Segundo numero:");
scanf("%d",&num2);

printf("\nDigite o Terceiro numero:");
scanf("%d",&num3);

 // O MAIOR NUMERO
    if (num1 >num2 && num1 >num3)
    {
        printf("\nO Primeiro Numero e maior");

    }else if (num2 >num1 && num2 > num3)
    {
        printf("\nO Segundo numero e maior");
    }else{
        printf("\nO Terceiro numero e maior");
    }
    
 // O MENOR NUMERO   

    if (num1 < num2 && num1 < num3)
    {
        printf("\nO Primeiro Numero e menor");
    }else if (num2 < num1 && num2 < num3)
    {
        printf("\n O Segundo numero e menor");
    }else{
        printf("\n O Terceiro Numero e menor");
    }
    
    


    return 0;
}