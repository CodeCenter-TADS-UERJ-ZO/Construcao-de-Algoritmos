Matriz
     Algoritmo: Primeira Posição 1
     C: Primeira Posição  0

Algoritmo Cap7Exerc10
    mat[5][5] : inteiro
    l, c, somaL4, somaC2 , somaDp, somaDs, soma: inteiro
Início 
       somaL4 <- 0
       somaC2 <- 0
       somaDp <- 0
       somaDs <- 0
       soma <- 0
       auxC <- 5     // Em C vai começar com 4
       para l de 1 até 5 passo 1 faça
		para c de 1 até 5 passo 1 faça
                         escreva("Numero..: ")
                         leia(mat[l][c])

                         se l = 4 então
				somaL4 <- somaL4 + mat[l][c]
                          fim se

                          se c = 2 então
                               somaC2 <- somaC2 + mat[l][c]
                           fim se

                           se l = c então
                                  somaDp <- somaDp + mat[l][c]
                           fim se

                           soma <- soma + mat[l][c]
                fim para // coluna
        fim para // linha

        para l de 1 até 5 passo 1 faça
                 somaDs <- somaDs + mat[l][auxC]
                 auxC >- auxC -1
         fim para

        fim para 

        escreva ("Somatório dos números da linha 4 é..: ", somaL4)
        escreva ("Somatório dos números da coluna 2 é..: ", somaC2)
        escreva ("Somatório dos números da Diagonal Principal é..: ", somaDp)
        escreva ("Somatório dos números da Diagonal Secundária é..: ", somaDs)
        escreva ("Somatório dos números da Matriz é..: ", soma)
Fim



Cap 5 - Exerc 24

Algoritmo Cap5Ex24
       nr : inteiro


Inicio
   
       escreva("Numero..: ")
       leia(nr)
       maior <- 0
       menor <- 0

       enquanto nr <> 0 faça
             
                se nr < 0 então
                          escreva("Favor digite um número positivo")
                   senão
                           
                fim se
              
                escreva("Para sair digite 0")
                escreva("Numero..: ")
                leia (nr)
       fim enquanto



Fim


#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nr, maior, menor;
	
	printf("Numero..: ");
	scanf("%d", &nr);
	maior = nr;
	menor = 99999999999;
	
	
	while(nr !=0)
	{
       if (nr <0)
       {
         printf("\nDigite um numero positivo.");
	    }
	   else
	   { 
		 if (nr > maior)
		 {
		 	maior = nr;
		 }
		
		if (nr < menor)
		 {
		 	menor = nr;
		 }
       }
		printf("\n---------------------------\n");
		printf("Numero..: ");
	    scanf("%d", &nr);
		
		
	}
	
	printf("\n\n=============== Resultado==========\n");
	printf("Maior número..: %d", maior);
	printf("\nMenor número..: %d", menor);
	
	return 0;
}



Cap 5 ex 25

Termina : codigo <=0
Enquanto: codigo > 0



Algoritmo Cap5Ex25


        escreva("Codigo do Cliente..: ")
        leia(codigo)
    
        enquanto codigo > 0 faça
               escreva ("Tipo de  Investimento")
               escreva ("1-Poupança")
               escreva ("2-Poupança Plus")
               escreva ("3-Renda Fixa)
	       escreva("Opção desejada..: ")
               leia (tipo)
               escreva("Valor investido..: ")
               leia(valor)
               
               se tipo = 1 então
                        rendimento <- valor * 1.5 / 100
                  senão
                       se tipo = 2 então
                               rendimento <- valor * 2 / 100
                          senão
                                 rendimento <- valor * 4 / 100
                         fim se
                fim se
                escreva("Valor do rendimento ..: " , rendimento)
 
                  escreva("-------------------------------------------")
                 escreva("Codigo do Cliente..: ")
                 leia(codigo)
         fim enquanto


Início


Fim




