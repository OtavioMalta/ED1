#include <stdio.h>
void imprime_vet_int(int *vetori, int n){
    for(int i = 0; i < n;i++){
        printf("%d ",vetori[i]);
    }
    printf("\n");
}
void copiarvet(int *vet_origem,int *vet_destino, int n){
    for(int i = 0; i < n;i++){
        vet_destino[i] = vet_origem[i];}
}

int main(){
    int origem[5] ={1,2,3,4,5};
    int destino[5] ={1,2,3,3,6};
    printf("O vetor de origem eh: ");
    imprime_vet_int(origem,5);
    printf("O vetor de destino eh: ");
    imprime_vet_int(destino,5);
    copiarvet(origem,destino,5);
    printf("O vetor de destino apos a copia eh: ");
    imprime_vet_int(destino,5);

    return 0;
}

/*
=> Faça uma função para copiar um vetor inteiro para outro 
vetor. Ambos vetores devem ter o mesmo tamanho. Mostre no 
programa principal os dois vetores.

Chamada:
copiarvet(vet_origem, vet_destino, n);


Os valores são definidos na função principal.
-------------------------------------------------------------------------------
Exemplo de Saída:

O vetor de origem eh: 1, 2, 3, 4, 5
O vetor de destino eh: 1, 2, 3, 3, 6
O vetor de destino apos a copia eh: 1, 2, 3, 4, 5
-------------------------------------------------------------------------------
*/