#include <stdio.h>

int main() {
    int b1,b2,b3,b4, bin, decimal;
    printf("== Conversor de numeros binarios ==\n");
    printf("Digite o 1o. bit: ");
    scanf("%d",&b1);
    printf("Digite o 2o. bit: ");
    scanf("%d",&b2);
    printf("Digite o 3o. bit: ");
    scanf("%d",&b3);
    printf("Digite o 4o. bit: ");
    scanf("%d",&b4);
    bin = b1*1000+b2*100+b3*10+b4;
    decimal = b1*8 + b2*4 + b3*2 + b4*1; //1x2³+1x2²+0x2¹+1x2º
    printf("O numero binario %d corresponde ao numero decimal %d",bin,decimal );
}

/*
=> Faça um conversor de número binário para decimal (inteiro). 
O número deve ter 4 bits, sendo o bit mais significativo digitado primeiro. 
Mostrar na resposta o número binário e o número decimal.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Conversor de numeros binarios >>
Digite o 1o. bit: 1
Digite o 2o. bit: 0
Digite o 3o. bit: 1
Digite o 4o. bit: 1
O numero binario 1011 corresponde ao numero decimal 11
-------------------------------------------------------------------------------
*/