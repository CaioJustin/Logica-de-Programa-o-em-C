#include <stdio.h>

#define l 2

int main (){

int num;

do
{
    printf("\nDigite um numero:");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("\nE Maior");
        break;
    case 3:
        printf("\nE Menor");
        break;
    case 4:
        printf("\nE Menor");
        break;
    case 5:
        printf("\nE Menor");
        break;
    case 6:
        printf("\nE Menor");
        break;
    case 7:
       printf("\nE Menor");
        break;
    case 8:
        printf("\nE Menor");
        break;
    case 9:
        printf("\nE Menor");
        break;
     case 10:
        printf("\nE Menor");
        break;
    case 2:
       printf("\nParabens");
       break;
    default:
       printf("\nNao vale numeros negativos ou maiores que 10!");
        break;
    }


} while (num != l);





    return 0;
}