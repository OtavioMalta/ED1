#include <stdio.h>

int main() {
    printf("<< Media Aritmetica >>\n");
    int n1,n2,n3,n4;
    printf("Digite a 1a nota:");
    scanf("%d",&n1);
    printf("Digite a 2a nota:");
    scanf("%d",&n2);
    printf("Digite a 3a nota:");
    scanf("%d",&n3);
    printf("Digite a 4a nota:");
    scanf("%d",&n4);
    int media = (n1+n2+n3+n4)/4.0;
    printf("===Notas===\nNota 1: %d; Nota 2: %d; Nota 3: %d; Nota 4: %d\nMedia: %d",n1,n2,n3,n4,media);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/