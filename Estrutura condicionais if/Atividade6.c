#include <stdio.h>
#include <ctype.h>

int main (){

char login [100];
char senha [100];
char LoginSalvo [100] ="caio";
char senhaSalva [100] ="123";


printf("\nDigite o Login");
gets(login);

printf("\nDigite a Senha");
gets(senha);



if (strcmp(login, LoginSalvo)==0 && strcmp(senha, senhaSalva )==0)
{
    printf("\nBem Vindo");
}else{
    printf("Login e Senha Invalida\n\n\n Quem es tu?");
}










    return 0;
}