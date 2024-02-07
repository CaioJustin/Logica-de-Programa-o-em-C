#include <stdio.h>


float convert(float metro){
    float cent;
    
    cent=metro*100;

    return (cent);
}


int main (){

float metro;
float cmm;

printf("Digite um numero em metro");
scanf("%f",&metro);

cmm=convert(metro);

printf("O Cetimetro e :%f",cmm);

    return 0;   
}