/*Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros, sendo que esses valores devem ser convertidos para o tipo lógico, onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.  A saída do programa deve ser como a mostrada abaixo
Exemplo de saída:
== Operadores Booleanos ==
Digite 0 para falso e não 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B:  VERDADEIRO
A or B:  VERDADEIRO
A xor B:  FALSO
notA:  FALSO*/

#include <stdio.h>
int main() {
    int a, b;
    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor(A): ");
    scanf("%d",&a);
    printf("Entre com o primeiro valor(B): ");
    scanf("%d",&b);
    printf("A and B: ");
    if(a&&b){printf("VERDADEIRO\n");}
    else{printf("FALSO\n");}
    printf("A or B: ");
    if(a||b){printf("VERDADEIRO\n");}
    else{printf("FALSO\n");}
    printf("A xor B: ");
    if((a || b) && !(a && b)){printf("VERDADEIRO\n");}
    else{printf("FALSO\n");}
    printf("Not A: ");
    if(!a){printf("VERDADEIRO\n");}
    else{printf("FALSO\n");}
}