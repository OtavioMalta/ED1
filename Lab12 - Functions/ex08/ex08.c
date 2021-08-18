#include <stdio.h>

//Acho que alguns exemplos que foram passados com os exercício 08 e 09 estão errados

int incp(int y, float p){
    int res;    
    res = y + y*p;
    
    return res;
}

int main(){
    int res, y;
    float p;

    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o percentual de alteração x: ");
    scanf("%f", &p);

    res = incp(y,p);

    printf("O valor alterado eh: %d", res);
    return 0;
}

/*
=> Faça uma função que altere um valor de um número real em x%. Se 
o valor de x for negativo ele deve ser decrementado, se for positivo 
aumente.

Uso da função: 
x = incp(y,10);
z = incp(y,-20);

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de y: 100
Digite o percentual de alteracao: 0.10 // 0.10 equivale a 10%
O valor alterado eh: 110
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de y: -100
Digite o percentual de alteração: .10
O valor alterado eh: -110
-------------------------------------------------------------------------------
*/