#include <stdio.h>

void seila(int num[]){
    int par=0;
    int impar=0;
    int i;
    for ( i=0; i <6 ; i++){ 
    if (num[i] % 2 ==0)
    {
        par++;
    }else{
        impar++;
    }
    }
        printf("\nA Quantidade de numero par e :%d",par);
        printf("\nA Quantidade de numero impar e :%d",impar);



}


int main (){

int i;
int num[6];

for ( i = 0; i < 6; i++)
{
    printf("Digite o %d number",i+1);
    scanf("%d",&num[i]);
}

seila(num);



    return 0;
}