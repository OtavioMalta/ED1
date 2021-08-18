#include <stdio.h>
#include <stdlib.h>
double *to_double(int *vet,int n){
    double *vet_double;
    vet_double = (double *)malloc(n*sizeof(double));
    for(int i = 0; i< n; i++){
        vet_double[i] = (double)vet[i];
    }
    return vet_double;
}
void imprime_vetd(double *vetord, int n){
    for(int i = 0; i < n;i++){
        printf("%.2lf ",vetord[i]);
    }
    printf("\n");
}
void imprime_veti(int *vetori, int n){
    for(int i = 0; i < n;i++){
        printf("%d ",vetori[i]);
    }
    printf("\n");
}
int main(){
    int n,*vet_int;
    double *vet_double;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&vet_int[i]);
    }
    vet_double = to_double(vet_int,n);
    printf("O vetor de origem eh: ");
    imprime_veti(vet_int,n);
    printf("O vetor convertido para double eh ");
    imprime_vetd(vet_double,n);
    return 0;
}

/*
=> Faça a função to_double, que recebe um vetor de inteiro e 
retorna um vetor com o mesmo conteúdo, mas convertido para 
double.

Chamada:
vet_double = to_double(vet_int,n);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o tamanho do vetor: 4
Digite o valor 1: 1
Digite o valor 2: 3
Digite o valor 3: 5
Digite o valor 4: 4

O vetor de origem eh: 1, 3, 5, 4
O vetor convertido para double eh: 1.00, 3.00, 5.00, 4.00
-------------------------------------------------------------------------------
*/