#include <stdio.h>

int main()
{
//var declaration
int codreg, codcarg, tonpeso, kgpeso, $carg, imp, total;
//input
printf("Insira o código estadual:...");
scanf("%f", &codreg);

printf("Insira peso da carga:...");
scanf("%f", &peso);

printf("Insira o código de produto da carga:...");
scanf("%f", &codcarg);
//process
kgpeso= tonpeso/1000;
if (10<=codcarg<=20){
 $carg= 100*kgpeso;
 else if(21<=codcarg<=30){
    $carg=200*kgpeso;
}
 else if(31<=codcarg<=40){
    $carg=300*kgpeso;
    
}
if(codreg=1){
    imp=kgpeso*0,65
    else if(codreg=2){
        imp=kgpeso*0,75
        else if(codreg=3){
            imp=kgpeso*0,85
            else if(codreg=4){
                imp=kgpeso*0,95
                else if{
                    imp=0
                }
            }
        }
    }
}
//output

printf("O peso da carga em Quilogramas é %f, o preço da carga é %f. A quantia de impostos a ser paga %f e valor a ser pago %f", kgpeso, $carg, imp, total );
    return 0;
}
