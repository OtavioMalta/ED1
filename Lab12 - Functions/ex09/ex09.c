#include <stdio.h>

void incp(int y, float p, int *r){
    int res;    
    res = y + y*p;
    *r = res;
}

int main(){
    int y, *r;
    float p;

    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o percentual de alteração x: ");
    scanf("%f", &p);

    r=&y;
    incp(y,p,r);

    printf("O valor alterado eh: %d", *r);
    return 0;
}

/*
=> Faça uma função que altere um valor de um número real em x%. 
Se o valor de x for negativo ele deve ser decrementado, se for
positivo aumente. O valor da variável deve ser passada por parâmetro,
ou seja, o retorno deve  ser void.


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