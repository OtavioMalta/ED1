#include <stdio.h>

int main() {
    printf("<< Pagamento encanador >>\n");
    int dias;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d",&dias);
    int bruto = dias*30;
    int ir = bruto*8/100;
    int iss = bruto*4/100;
    printf("Valor bruto R$: %d\n", bruto);
    printf("Valor liquido R$: %d\n", bruto - iss - ir);
    printf("ISS R$: %d\n", iss);
    printf("IR R$: %d\n", ir);
        }

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/