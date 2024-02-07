#include <stdio.h>

int parq(int num[]){
    int i;
    int par=0;
    for ( i = 0; i < 6; i++)
    {
        if (num[i] % 2 ==0)
        {
            par++;
        }
        
    }
    
   
    return par;
}

int imparq(int num[]){
    int i;
    int impar=0;
    for ( i = 0; i < 6; i++)
    {
        if (num[i] % 2 !=0)
        {
            impar++;
        }
        
    }
    
   
    return impar;
}

int main (){

int i;
int num[6];
int par;
int impar;
for ( i = 0; i < 6; i++)
{
    printf("\nDigite o %d numero",i+1);
    scanf("%d",&num[i]);
}

par=parq(num);
impar=imparq(num);


printf("\nA Quantidade de numero par e :%d",par);
printf("\nA Quantidade de numero impar e :%d",impar);

    return 0;
}