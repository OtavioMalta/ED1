#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas

int main(){
    int n,par=0,impar=0;
    int *num;
    printf("<< Par ou Impar >>\n");
    printf("Quantos inteiros serao lidos: ");
    scanf("%d", &n);
    num = (int *)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++){
        printf("%d inteiro: ",i+1);
        scanf("%d", &num[i]);
        if(num[i]%2==0){
            par++;
        }else{
            impar++;
        }
    }

    printf("\nSao pares %d dos %d inteiros.\n",par,n);
    printf("Sao impares %d dos %d inteiros.\n",impar,n);
    free(num);
    return 0;
}

/*
3) Faça um programa que leia n inteiros (definidos pelo usuário) 
armazenando-os em uma memória alocada dinamicamente. Em seguida, mostre
quantos dos n números são pares e quantos são ímpares.


Exemplo de saída:
<< Par ou Impar >>
Quantos inteiros serao lidos: 5
1º inteiro: 1
2º inteiro: 2
3º inteiro: 3
4º inteiro: 4
5º inteiro: 5

Sao pares: 2 dos 5 inteiros lidos.
Sao impares: 3 dos 5 inteiros lidos.

*/