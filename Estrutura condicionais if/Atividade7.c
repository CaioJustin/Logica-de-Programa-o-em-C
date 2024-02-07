#include <stdio.h>



int main (){

int nascimento;


 printf("\nDigite o seu ano de nascimento:");
 scanf("%d",&nascimento);


nascimento = 2023 - nascimento;

printf("\nVoce tem :%d Anos",nascimento);

if (nascimento <18 || nascimento > 65)
{
    printf("\nVoce nao e obrigado a votar");
}else{
    printf("\nVoce e obrigado a votar");
}




    return 0;
}