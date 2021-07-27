//INCOMPLETO!!!
#include <stdio.h>

int main() {
    int vetor[8],c[8];     
    for(int i=0; i < 8; i++){
        printf("Entre com o numero %i: ",i+1);
        scanf("%i",&vetor[i]);
    }    
    printf("Valores repetidos: ");    
    for(int j = 0; j < 8 ; j++) {    
        for(int k = j + 1; k < 8; k++) {  
            if(vetor[j] == vetor[k] && vetor[j]!=NULL){  
                printf("%d ", vetor[k]);
                vetor[k]=NULL;
                vetor[j]=NULL;
                }
        }
    }   
    return 0;
}

/*

    Faça um programa que leia um vetor de 8 posições e verifique se existem 
    valores iguais e os escreva a quantidade de vezes que eles aparecem na lista

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 
5 aparece 2 vezes
6 aparece 2 vezes
-3 aparece 3 vezes

*/