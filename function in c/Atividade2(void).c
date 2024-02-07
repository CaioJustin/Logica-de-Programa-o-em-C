#include <stdio.h>

void tabuada(int num){
    int i;
    
    for ( i = 0; i < 11; i++)
    {
        printf("\n%d x %d= %d",num,i,num*i);
    }
    

}

int main (){

int num;


printf("\nDigite o numero(da tabuada):");
scanf("%d",&num);

tabuada(num);

    return 0;
}