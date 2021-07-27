#include <stdio.h>

int main(){
    int num[6],aux;
    printf("<< Listando um vetor - com loops >>\n");
    for(int i = 0; i<6;i++){
            printf("Entre com o numero %d: ",i+1);
            scanf("%d",&num[i]);
    }
    for (int i = 1; i < 6; i++) {
         for (int j = 0; j < 6 - 1; j++) {
            if (num[j] < num[j + 1]) {
                aux = num[j];
                num[j] = num[j + 1];
                num[j + 1] = aux;
            }
        }
    }
    printf("Ordem inversa dos numeros: ");

    for(int k = 0; k < 6; k++){
        printf(" %d", num[k]);
    }

    return 0;
}
    

/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Ordem inversa dos numeros: 6 3 0 4 6 5
*/
