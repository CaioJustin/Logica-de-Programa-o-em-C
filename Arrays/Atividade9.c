#include <stdio.h>

#define k 6
#define p 2

int main (){

int i =0;
int num[6];

for ( i = 0; i < k; i++)
{
    printf("\nDigite o %d valor",i+1);
    scanf("%d",&num[i]);
}

for ( i = 5; i >= 0; i--)
{
    printf("\n%d",num[i]);
}



    return 0;
}