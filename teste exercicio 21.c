
#include <stdio.h>
#include <stdlib.h>

int main() {
//declaraçao de variaveis
float Nhours, hours, salmin,Nextra, extra, saltotal;
//entrada de dados
printf("Coloque seu salario...:");
scanf("%f", &salmin);
printf("Quantas horas extras voce trabalhou?...:");
scanf("%f", &Nextra);
printf("Quantas hora normais você trabalhou?...:");
scanf("%f", &Nhours);
//processamento
hours= salmin/8; //calculando o valor da hora trabalhada
extra= salmin/4; //calculando o valor da hora extra
saltotal= Nhours*hours + Nextra*extra;
//saida de dados
printf("Salario a receber é %2f ...:", saltotal);
    return 0;
}

