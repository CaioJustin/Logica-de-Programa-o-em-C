#include <stdio.h>

float somar(float num1,float num2){
    float soma;
    soma=num1+num2;
    return (soma);
}

float mult (float num1,float num2){
    float mult;
    mult=num1*num2;
    return (mult);
}



float sub(float num1,float num2){
    float sub;
    sub= num1-num2;
    return (sub);
}

float div(float num1,float num2){
    float diver;
    diver=num1/num2;

    return (diver);
}

int main (){

float num1;
float num2;
float soma;
float divisao;
float multipli;
float subtra;

printf("\nDigite o primerio numero");
scanf("%f",&num1);

printf("\nDigite o segumdo numero");
scanf("%f",&num2);

soma=somar(num1,num2);
multipli=mult(num1,num2);
subtra=sub(num1,num2);
divisao=div(num1,num2);

printf("\nA SOMA E :%.1f",soma);
printf("\nA SUBTRACAO E :%.1f",subtra);
printf("\nA DIVISAO E :%.1f",divisao);
printf("\nA MULTIPLI E :%.1f",multipli);

    return 0;
}