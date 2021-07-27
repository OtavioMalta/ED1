#include <stdio.h>

int main(){
    int v[5];
    printf("<< Zerando negativos >>\n");
    for(int i=1;i<=5;i++){
        printf("Entre com o numero %d: ",i);
        scanf("%d",&v[i]);
        if(v[i]<0){
            v[i]=0;}
    }
    printf("Negativo zerado: ");
    for (int k = 1; k <= 5; k++)
    {
        printf("%d ",v[k]);
    }
    
    return 0;
}

/*
Leia um vetor de 5 posições e atribua valor 0 para todos os elementos
que possuírem valores negativos. Mostre o vetor final.

Exemplo de saída}:
<< Zerando negativos >>
Entre com o numero 1: 5
Entre com o numero 2: -6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: -3

Negativo zerados: 5 0 4 0 0 
*/