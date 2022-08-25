#include <stdio.h>
#include <stdlib.h>

int main() {
	
  //  char tipo[1];
    int continuar, qtdLS =0, qtdLI=0;
	float compra, venda, lucro, total=0; 
	
	// definindo continuar com 1 porque vamos trabalhar com a rergunta Deseja continuar?
	continuar = 1;
	while (continuar == 1)
	{
	
		printf("Valor da Compra..:");
		scanf("%f", &compra);
    	printf("Valor da Venda..:");
		scanf("%f", &venda);
		// calculando o valor do lucro
		lucro = venda - compra;
		printf("\n------------------------------------");
		if (lucro >= 0){
	     	printf("\nValor do lucro..: %.2f", lucro);
        }
	    else {
		    printf("\nValor do Prejuizo..: %.2f", lucro);
        }
  
        // qtd de acções com lucro > 1000
        if (lucro > 1000)
        { 
            qtdLS++;
        }
        
         // qtd de acções com lucro < 200
         
         if (lucro > 0 && lucro < 200)
         {
         	qtdLI++;
         }
		//
		total = total + lucro;
		// alterando o valor da condição do while
		printf("\n------------------------------------");
		printf("\nDeseja continuar 1- Sim 2- Nao..: ");
		scanf("%d", &continuar);
		printf("\n------------------------------------\n");
	     
	}// fim enquanto
	// Resultado
	printf("Quantidade de acoes com lucro superior a 1000 ..: %d", qtdLS);
	printf("\nQuantidade de acoes com lucro inferior a 200 ..: %d", qtdLI);
	printf("\nTotal de lucro da empresa..: %.2f", total);
	return 0;
	
}
