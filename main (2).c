/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main()
{
//declaraçao de variaveis
float diagMaior, diagMenor, area1, area2;
//entrada de dados
printf("Digite o tamanho da diagonal maior: ");
scanf("%f", &diagMaior);
printf("Agora digite a diagonal menor: ");
scanf("%f", &diagMenor);
//processamento
area1=diagMaior*diagMenor;
area2=area1/2;
//saída de dados
printf("A área do losangulo é %.2f ", area2);
    return 0;
}