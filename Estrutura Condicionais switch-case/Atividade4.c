#include <stdio.h>
#include <locale.h>

int main (){

setlocale(LC_ALL,"Portuguese");
int num;

printf("Escreva um numero ente 1 e 12(Cada numero referese a um mes)");
scanf("%d",&num);

switch (num)
{
case 1:
    printf("E Janeiro");
    break;
case 2 :
    printf("E Fevereiro");
    break;
case 3 :
   printf("E Março");
   break;
case 4 :
   printf("E Abril");
   break;
case 5 :
   printf("E Maio");
   break;
case 6 :
   printf("E Junho");
   break;
case 7:
   printf("E Julho");
   break;
case 8:
   printf("E Agosto");
   break;
case 9:
   printf("E Setembro");
   break;
case 10:
   printf("E Outubro");
   break;
case 11:
   printf("E Novembro");
   break;  
case 12:
   printf("E Dezembro");
   break;
default:
   printf("Tente novamente");
    break;
}


    return 0;
}