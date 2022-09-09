// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

int main() {
//declaração de variaveis
char nome, classe;
double sexo, idade;
//apresentação do programa
printf("-----------------------------------\n");
printf("---------------Start---------------\n");
printf("-----------------------------------\n");
printf("Por favor, insira as informaçoes   \n");
printf("de cadastro nos campos abaixo...:\n\n");
//area de cadastro de informações

printf("===================================\n");
printf("NOME...:");
gets("%c", &nome);

printf("===================================\n");

printf("===================================\n");
printf("IDADE...:\n");
gets(" %d", &idade);

printf("===================================\n");

printf("===================================\n");
printf("SEXO...:\n");
gets(" %d", &sexo);

printf("===================================\n");

printf("===================================\n");

printf("===================================\n");
printf("CLASSE...:\n");
gets(" %c", &classe);

printf("===================================\n");



    return 0;
}
