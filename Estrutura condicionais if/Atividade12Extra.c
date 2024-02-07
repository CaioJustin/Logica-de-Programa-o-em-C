#include <stdio.h>

int main (){

int peso;
float altura;
float ideal;

printf("\nDigite o seu Peso:");
scanf("%d",&peso);


printf("\nDigite a sua altura:");
scanf("%f",&altura);

ideal = peso / altura * altura;


printf("\nO SEU PESO IDEAL E :%.1f",ideal);

printf("\n      Imc           | Classificacao");
printf("\n Abaixo de 18.5     | Abaixo do Peso");
printf("\n entre 18.6 e 24.9  | Peso Ideal(Parabens) ");
printf("\n Entre 25.0 e 29.9  | Levemente Acima do Peso");
printf("\n Entre 30.0 e 34.9  | Obesidade Grau I");
printf("\n Entre 35.0 e 39.9  |  Obesidade Grau II");
printf("\n Acima de 40        |  Obesidade III(Morbida)");

    return 0;
}