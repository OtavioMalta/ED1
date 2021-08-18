#include <stdio.h>
#include <stdlib.h>

//lembre-se de incluir as bibliotecas adequadas

int main() {
    printf("<< Guarda inteiros >>\n");
    int *a;

    //(a)
    a = (int *)malloc(5*sizeof(int));

    //(b)
    for(int i; i<5; i++){
        printf("Digite o numero(%d): ", i+1);
        scanf("%d", &a[i]);
    }

    //(c)
    for(int p = 0; p < 5; p++){
        printf("\nO numero(%d) eh %d",p+1,a[p]);
    }

    free(a);
}

/*
2) Crie um programa que:
    (a) Aloque dinamicamente um array de 5 números inteiros, 
    (b) Peça para o usuário digitar os 5 números no espaço alocado, 
    (c) Mostre na tela os 5 números, 
    (d) Libere a memoria alocada.

Exemplo de saída:
<< Guarda inteiros >>
Digite o numero(1): 4
Digite o numero(2): 6
Digite o numero(3): 8
Digite o numero(4): 3
Digite o numero(5): 9 

O numero(1) eh 4
O numero(2) eh 6
O numero(3) eh 8
O numero(4) eh 3
O numero(5) eh 9
*/