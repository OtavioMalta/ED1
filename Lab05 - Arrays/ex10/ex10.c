#include <stdio.h>

int main(){
    printf("<< Subtracao de vetores >>\n");
    int a[3],b[3],c[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o valor %d de A: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int k = 0; k < 3; k++)
    {
        printf("Digite o valor %d de B: ",k+1);
        scanf("%d",&b[k]);
    }
    for (int l = 0; l < 3; l++)
    {
        c[l]=a[l]-b[l];
    }
    printf("O vetor C, definido como C = A-B:  (%d, %d, %d)",c[0],c[1],c[2]);
    return 0;
}

/*
Faça um programa que receba do usuário dois arrays  A e B, com 3 números inteiros cada. Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.

Exemplo de saída:
<< Subtracao de vetores >>
Digite o valor 1 de A: 50
Digite o valor 2 de A: 60
Digite o valor 3 de A: 70

Digite o valor 1 de B: 30
Digite o valor 2 de B: 0
Digite o valor 3 de B: -10

O vetor C, definido como C = A-B:  (20, 60, 80) 
*/