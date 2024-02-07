#include <stdio.h>

#define o 5

int main (){

int i=0;
int num[6];
int pos=0;
int neg=0;
int maior=0;
int menor=9999;
int par=0;
int impar=0;
int mpar=0;

for ( i = 0; i < o; i++)
{
    printf("\nDigite o %d numero:",i+1);
    scanf("%d",&num[i]);

    if (num[i] > 0)
    {
        pos++;
    }else{
        neg++;
    }
    
   if (num[i] > maior)
   {
     maior=num[i];
   }

   if (num[i] < menor)
   {
      menor=num[i];
   }
   
   if (num[i] % 2==0)
   {
     par++;
     mpar=num[i]/par;
   }else{
      impar++;
   }
   
}


printf("\nO Maior numero :%d", maior);
printf("\nO Menor numero :%d", menor);

printf("\nA Quantidade de numero postivo :%d",pos);
printf("\nA Quantidade de numero negativo :%d",neg);

printf("\nA Quantidade de numero par :%d",par);
printf("\nA Quantidade de numero impar :%d",impar);
printf("\nA Media de numeros par :%d",mpar);


    return 0;
}