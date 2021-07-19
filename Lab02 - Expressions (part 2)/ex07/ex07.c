#include <stdio.h>

int main() {
    int a, b;
    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor(A): ");
    scanf("%d",&a);
    printf("Entre com o primeiro valor(B): ");
    scanf("%d",&b);
    printf("A and B: %d\n",a&&b);
    printf("A or B: %d\n", a||b);
    printf("A xor B: %d\n",(a || b) && !(a && b));
    printf("Not A: %d\n", !a);
}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/