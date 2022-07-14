#include<stdio.h>
#include<stdlib.h>
int main(){
	//variables
	float m1, n1, n2, n3, n4;
	//input
	printf("insira sua nota de matemática...:");
	scanf("%f", &n1);
	printf("insira sua nota de portugues...:");
	scanf("%f", &n2);
	printf("insira sua nota de historia...:");
	scanf("%f", &n3);
	printf("insira nota de ingles...:");
	scanf("%f", &n4);
	//processing
	m1=(n1+n2+n3+n4)/4;
	
	printf("Média final...:");
	
	//output
	if (m1 >= 7)
	   printf("APROVADO");
 
 else
 	 printf("REPROVADO");
 	 
 	 return 0;
}
