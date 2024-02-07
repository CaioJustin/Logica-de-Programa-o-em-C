#include <stdio.h>

int main (){

int num;

printf("Digite um numero:");
scanf("%d",&num);


if (num % 2 ==0 )
{
    printf("O Numero e par");
}else{
    printf("O Numero e impar");
}



return 0;
}