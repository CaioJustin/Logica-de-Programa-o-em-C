#include <stdio.h>
#include <string.h>

int main (){



char senhacorreta[12]= "4785";
char logincorreta[12]= "caio";
char login[10];
char senha[10];

do
{
    printf("\nDigite o seu email:");
    gets(login);

    fflush(stdin);

    printf("\nDigite a sua senha:");
    gets(senha);


} while (strcmp(login, logincorreta) !=0 || strcmp(senha, senhacorreta)!=0);

printf("Login realizado com sucesso");

    return 0;
}