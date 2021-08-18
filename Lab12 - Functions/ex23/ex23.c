#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maiorMenor(int *vet, int n){
    int maior, menor;
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
    printf("\nMaior: %d   ",maior);
    printf("Menor: %d",menor);
}

int negativos(int *vet, int n){
    int res =0;
    for(int i = 0; i<n; i++){
        if(vet[i]<0){
            res++;
        }
    }
    return res;
}
void copiarvet(int *vet_origem,int *vet_destino, int n){
    for(int i = 0; i < n;i++){
        vet_destino[i] = vet_origem[i];}
}
void multvet(int *vetor,int n,int escalar){
    for(int i = 0; i<n; i++){
        vetor[i] *= escalar;
    }
}
void abs_vet(int *vet, int *vetabs){
    for(int i = 0; i < sizeof(vet); i++){
        vetabs[i] = abs(vet[i]);
    }
}
void imprime_vet_int(int *vetori, int n){
    for(int i = 0; i < n;i++){
        printf("%d ",vetori[i]);
    }
    printf("\n");
}
int main(){
    int n, *vet, *vetabs, *vetcpy, esc;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d",&n);
    vet = (int*)malloc(n*sizeof(int));
    vetabs = (int*)malloc(n*sizeof(int));
    vetcpy = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        printf("Digite o valor %d: ", i+1);
        scanf("%d",&vet[i]);
    }
    printf("\nVetor: ");
    imprime_vet_int(vet,n);

    maiorMenor(vet,n);

    int neg = negativos(vet,n);
    printf("Numero de negativos: %d\n", neg);

    abs_vet(vet, vetabs);
    printf("Valor absoluto: ");
    imprime_vet_int(vetabs,n);

    printf("\nCopiando para outro vetor...\n");

    printf("Vetor original: ");
    imprime_vet_int(vet, n);

    printf("Vetor copiado: ");
    copiarvet(vet,vetcpy,n);
    imprime_vet_int(vetcpy,n);

    printf("\nEntre com o valor escalar para multiplicar o vetor original:");
    scanf("%d",&esc);
    multvet(vet, n, esc);

    printf("Vetor original: ");
    imprime_vet_int(vet, n);

    printf("Vetor copiado: ");
    imprime_vet_int(vetcpy,n);

    free(vet);
    free(vetabs);
    free(vetcpy);
    return 0;
}

/*
=> Use as funções criadas nos exercícios anteriores em um único 
programa, mas agora trabalhe com vetores alocados 
dinamicamente no programa principal. Lembre-se de liberar a 
memória depois de usar os vetores.


No programa principal, solicite ao usuário o tamanho do vetor, os valores
a serem computados e posteriormente, o valor escalar para multiplicação do vetor.

-------------------------------------------------------------------------------
Exemplo de Saída:

Entre com o tamanho do vetor: 4
Entre com o elemento 1: 50
Entre com o elemento 2: 20
Entre com o elemento 3: 10
Entre com o elemento 4: -30

Vetor: 50, 20, 10, -30
Maior: 50   Menor: -30
Numero de negativos: 1
Vetor absoluto: 50, 20, 10, 30

Copiando para outro vetor (alocado dinamicamente)

Vetor original: 50, 20, 10, -30
Vetor copiado: 50, 20, 10, -30

Entre com o valor escalar para multiplicar o vetor original: 10

Vetor original: 500, 200, 100, -300
Vetor copiado: 50, 20, 10, -30
-------------------------------------------------------------------------------
*/