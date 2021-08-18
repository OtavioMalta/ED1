#include <stdio.h>
#include <stdlib.h>
void imprime_vet(double *vetori, int n){
    for(int i = 0; i < n;i++){
        printf("%.2lf ",vetori[i]);
    }
    printf("\n");
}
double *copiarvet(double *vet_origem,int n){
    double *vet_destino;
    vet_destino = (double*)malloc(n*sizeof(double));
    for(int i = 0; i < n; i++){
        vet_destino[i] = vet_origem[i];
    }
    return vet_destino;
}
int main(){
    int n;
    double *vet_origem, *vet_destino;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%lf",&vet_origem[i]);
    }
    vet_destino = copiarvet(vet_origem, n);
    printf("O vetor de origem eh: ");
    imprime_vet(vet_origem,n);
    printf("O vetor de destino eh: ");
    imprime_vet(vet_destino,n);
    free(vet_origem);
    return 0;
}

/*
=> Faça uma função que copia um vetor de double para um 
outro vetor. Esse outro vetor é alocado dentro da função que faz a 
cópia. Mostre os dois vetores.

Chamada:
vet_destino  = copiarvet(vet_origem,  n);

-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1.20, 2.00, 3.20, 4.00, 5.10
O vetor de destino eh: 1.20, 2.00, 3.20, 4.00, 5.10
-------------------------------------------------------------------------------
*/