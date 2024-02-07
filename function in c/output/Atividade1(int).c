#include <stdio.h>

int somar(int num1,int num2){
    int somat=0;
    somat+=num1+num2;
    
    return (somat);
}

int mediar(int soma){
    int media=0;
    media=soma/2;

    return (media);
}


int main (){

int num1;
int num2;
int soma;
int media;

printf("\nDigite o primeiro numero");
scanf("%d",&num1);

printf("\nDigite o segundo numero");
scanf("%d",&num2);

soma=somar(num1,num2);

media=mediar(soma);


printf("\nA soma e :%d",soma);
printf("\n Media e :%d",media);


    return 0;
}