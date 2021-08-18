#include <stdio.h>
#include <stdlib.h>
double *copiarvet(double *vet_origem,double *vet_destino, int n){
    vet_destino = (double *)malloc(n*sizeof(double));
    for(int i = 0; i < n;i++){
        vet_destino[i] = vet_origem[i];}
    return vet_destino;
}
void imprime_vetd(double *vetord, int n){
    for(int i = 0; i < n;i++){
        printf("%.2lf ",vetord[i]);
    }
    printf("\n");
}
int main(){
    double *origem;
    double *destino;
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%lf",&origem[i]);
    }
    destino = copiarvet(origem,destino,n);
    imprime_vetd(destino,n);
    free(destino);
    return 0;
}

/*
=> Tente fazer uma função que copia um vetor de double para 
um outro vetor. Esse outro vetor é alocado dentro da função que 
faz a cópia.  Mostre vet_destino no programa principal.

Chamada:
copiarvet(vet_origem, vet_destino, n);

Explique porque a função não funciona. Faça o mapa de memória 
(antes, durante, e depois da chamada da função). Qual seria a 
solução para uma função deste tipo?

-------------------------------------------------------------------------------
Observação:

Utilize o excel para fazer o mapa de memória (Modelo disponível nos
arquivos do Teams).
-------------------------------------------------------------------------------
*/