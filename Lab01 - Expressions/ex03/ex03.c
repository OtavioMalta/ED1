#include <stdio.h>

int main() {
    printf("<< Sucessor e Antecessor >>\n");
    int numero;
    printf("Digite um numero:");
    scanf("%d",&numero);
    printf("\nAntecessor: %d\nNumero: %d\nSucessor: %d",numero-1,numero,numero+1);
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/