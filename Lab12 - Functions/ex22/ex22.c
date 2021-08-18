#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime_vet_int(int *vetori, int n){
    for(int i = 0; i < n;i++){
        printf("%d ",vetori[i]);
    }
    printf("\n");
}
void abs_vet(int *vet){
    for(int i = 0; i < sizeof(vet); i++){
        vet[i] = abs(vet[i]);
    }
}
int main(){
    int n, *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (int*)malloc(n*sizeof(int));

    for(int i = 0; i<n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d",&vet[i]);
    }
    printf("O vetor de origem eh: ");
    imprime_vet_int(vet,n);

    abs_vet(vet);
    printf("O vetor com valores absolutos eh: ");
    imprime_vet_int(vet,n);
    free(vet);
    return 0;
}

/*
=> Faça uma função para transformar os números de um vetor 
de inteiros em seu valor absoluto (use a função abs (math.h)).

Chamada:
    abs_vet(vet);

No programa principal, solicite ao usuário o tamanho do vetor e os valores
a serem computados. Imprima o vetor de origem e o vetor com valores absolutos.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: 1
Digite o valor 2: -1
Digite o valor 3: 2

O vetor de origem eh: 1, -1, 2
O vetor com valores absolutos eh: 1, 1, 2
-------------------------------------------------------------------------------
*/