#include <stdio.h>

void DesenhaLinha(int t){
    for(int tam = 0; tam < t; tam++){
        printf("=");
    }
    printf("\n");
}

unsigned long long int fatorial(int f){
    unsigned long long int fat = 1;
    for(int i = f; i > 0; i--){
        fat *= i;
    }
    return fat;
}

int main(){
    int l,n;
    unsigned long long int res;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &l);
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &n);
    res = fatorial(n);

    DesenhaLinha(l);
    printf("O fatorial de %d eh %llu\n", n, res);
    DesenhaLinha(l);
    
    return 0;
}

/*
=> Faça uma função para calcular o fatorial de um número. Use essa função
para calcular o fatorial de um número que o usuário digitar.
Colocar todas as funções E/S (entrada e saída) no programa principal.
(use também a função DesenhaLinha – esta pode conter comandos de saída fora do programa principal). 

Ex: Fatorial(5) tem como saída 120 
    DesenhaLinha(10) tem  como saída ==========

No programa principal, solicite ao usuário o tamanho da linha a ser desenhada e o número que se
deseja calcular o fatorial.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho da linha: 10
Digite o numero que deseja calcular o fatorial: 5
==========
O fatorial de 5 eh 120
==========
-------------------------------------------------------------------------------
*/