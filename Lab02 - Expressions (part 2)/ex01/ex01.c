#include <stdio.h>

int main(){
    int n1,n2;
    printf("<< Calculo da Media >>\n");
    printf("Digite a nota da prova 1: ");
    scanf("%d",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%d",&n2);
    printf("A nota media eh %d\n",(n1+n2)/2);
}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/