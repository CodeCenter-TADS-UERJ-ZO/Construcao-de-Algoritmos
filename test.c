#include<stdio.h>
int main()
{
//declaração de variaveis
float baseMen, baseMax, alt, area;
//entrada de dados
printf("Por favor insira a base menor do trapézio ..:");
scanf("%f", &baseMen); //todos as variaveis precisam de '&'
printf("Excelente! Agora insira a base maior..:");
scanf("%f", &baseMax);
printf("Agora só falta a altura..:")
scanf("%f",&alt);
//processamento
area= (baseMax + baseMen)*alt/2;
//saida de dados
printf("A área do trapézio é %f ..:",area);
}