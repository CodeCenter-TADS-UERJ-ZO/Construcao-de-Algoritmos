/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
//declaraçao de variaveis
float a, b, d;
//entrada de dados
printf("Escreva um valor: ");
scanf("%f", &a);
printf("Escreva mais um valor: ");
scanf("%f", &b);
//processamento
d=a/b;

//saída de dados
printf("O valor da divisão é %f",d);

    return 0;
}
