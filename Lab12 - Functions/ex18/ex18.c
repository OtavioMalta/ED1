#include <stdio.h>
#include <stdlib.h>

void imprime_vet_double(double *vetord, int n){
    for(int i = 0; i < n;i++){
        printf("%.2lf ",vetord[i]);
    }
}

void maiorMenor(double *vet, int n){
    double maior, menor;
    for(int i = 0; i < n;i++){
        if(i==0){
            maior = vet[i];
            menor = vet[i];
        }else if(vet[i] > maior){
            maior = vet[i];
        }else if(vet[i] < menor){
            menor = vet[i];
        }
    }
    printf("\nO maior valor eh: %.2lf",maior);
    printf("\nO menor valor eh: %.2lf",menor);
}

int main(){
    int n;
    double *vet;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (double *)malloc(n*sizeof(double));

    for(int i = 0; i<n;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%lf",&vet[i]);
    }
    
    printf("O vetor principal eh: ");
    imprime_vet_double(vet,n);

    maiorMenor(vet,n);
    free(vet);

    return 0;
}

/*
=> Crie um procedimento que recebe um vetor de double como 
entrada e devolve o maior e o menor elemento do vetor. Mostre no 
programa principal o vetor, o maior e o menor elemento.


No programa principal, solicite ao usuário o tamanho do vetor, e os
valores a serem computados.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 3
Digite o valor 1: -1
Digite o valor 2: 0.02
Digite o valor 3: 3

O vetor principal eh: -1.00, 0.02, 3.00
O maior valor eh 3.00
O menor valor eh -1.00
-------------------------------------------------------------------------------
Obs: note que para este caso, foram consideradas duas casas após o ponto. 
*/