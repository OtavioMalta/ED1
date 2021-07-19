#include <stdio.h>

int main() {
    int a,b,c;
    printf("== Troca do conteudo de variaveis ==\n");
    printf("Entre com o valor de A: ");
    scanf("%d",&a);
    printf("Entre com o valor de B: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Apos a troca, o valor de A eh %d e o de B eh %d",a,b);
    
}

/*
=> Faça um algoritmo que leia o valor de duas variáveis A e B e 
troque os valores dessas variáveis.

-------------------------------------------------------------------------------
Exemplo de saída:

== Troca do conteudo de variaveis ==
Entre com o valor de A: 5
Entre com o valor de B: 6
Apos a troca, o valor de A eh 6 e o de B eh 5
-------------------------------------------------------------------------------
*/