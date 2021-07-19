#include <stdio.h>

int main() {
    printf("<< Pagamento encanador >>\n");
    float dias;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%f",&dias);
    float bruto = dias*30;
    float iss = bruto*4/100;
    float ir = (bruto-iss)*8/100;
    printf("Valor bruto R$: %.0f\n", bruto);
    printf("Valor liquido R$: %.2f\n", bruto - iss - ir);
    printf("ISS R$: %.0f\n", iss);
    printf("IR R$: %.2f\n", ir);
}

/*
=> Um contador percebeu que o cálculo de IR do encanador estava errado, pois estava sendo calculado sobre o valor bruto que ele recebeu. 
Refaça o programa anterior, considerando que o IR é sobre o valor bruto após o desconto do ISS.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 794.88
ISS R$: 36
IR R$: 68.12
-------------------------------------------------------------------------------
*/