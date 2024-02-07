#include <stdio.h>

void par(int num){
    if (num % 2 ==0)
    {
        printf("\nE par");
    }else{
        printf("\nE impar");
    }
    

}


int main (){

int num;

printf("\nDigite um numero");
scanf("%d",&num);

par(num);

    return 0;
}