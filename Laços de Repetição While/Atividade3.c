#include <stdio.h>
#include <stdlib.h>

int main (){


float media;

 do
 {
    printf("\nDigite a sua media:\n");
    scanf("%f",&media);




 } while (media < 0 || media >10);

 if (media >= 7)
 {
    printf("\nAprovado");
 }else if (media >= 5 && media <6.9)
 {
    printf("\nRecuperacao");
 }else if (media < 5 ){
    printf("\nReprovado");
 }else{
   printf("Erro!");
 }
 
 
 




    return 0;
}