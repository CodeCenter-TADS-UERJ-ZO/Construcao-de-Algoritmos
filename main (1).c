/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
//declaraçao de variaveis
float Sal, Vendas, Com, Salcom, Salfinal;
//entrada de dados
printf("Por favor, insira seu salário:");
scanf("%f", &Sal);
printf("Por favor, insira sua quantidade de vendas:");
scanf("%f", &Vendas);
//processamento
Com=Vendas*0.04;
Salfinal=Sal+Com; //calculando o salario final

//saída de dados
printf("Seu salário após o aumento é %.2f sua taxa de comissão é %.2f e sua quantidade de vendas é %.2f", Salfinal, Com,Vendas);
    return 0;
}

