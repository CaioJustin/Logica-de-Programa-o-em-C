#include <stdio.h>

#define o 5

int main(){

int i =0;
int num[5];

for ( i = 0; i < o; i++)
{
    printf("\nDigite o %d numero:",i+1);
    scanf("%d",&num[i]);

    if(num[i]<0)
    {
        num[i]=0;
    }
    
}


for ( i = 0; i < o; i++)
{
    printf("\nO %d numero e :%d",i+1,num[i]);
}





    return 0;
}