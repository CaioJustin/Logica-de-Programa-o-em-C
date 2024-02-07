#include <Stdio.h>



int main (){

int i;
int num[3];

for ( i = 0; i < 3; i++)
{
    printf("\nDigite %d numero:",i+1);
    scanf("%d",&num[i]);
}

for ( i = 0; i < 3; i++)
{
    printf("\nO %d numero e :%d",i+1,num[i]);
}




    return 0;
}