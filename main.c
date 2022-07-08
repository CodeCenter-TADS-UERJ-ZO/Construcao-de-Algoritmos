#include <stdio.h>
int main()
{
//declaração de variaveis

float peso1, peso2;

//entrada de dados

printf("Por favor insira seu peso em KG..:");
scanf("%f", &peso1);

//processamento

peso2= peso1 * 1000;

//saida de dados
printf("Seu peso em Gramas é %.2f ..:",peso2);
}