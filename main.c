
#include <stdio.h>

int main()
{//objetivo:  apresentar o quanto sobre do salário

//declaração de variaveis

float sobra, salario, contas, conta1, conta2;

//entrada de dados

printf("Por favor escreva sua conta de luz...:");
scanf("%f",& conta1);
printf("Excelente! Agora escreva sua conta de água...:");
scanf("%f",& conta2);
printf("Agora insira seu salário...:");

//processamento

contas=(conta1 + conta1)*1.02;
sobra= salario - contas;
//saida de dados
printf("Seu saldo restante é %f...:", sobra);
    return 0;
}
