/* ex03
Crie uma função que faz a junção de dois vetores inteiros. 
A função deve ter como entrada os dois vetores e seus
respectivos tamanhos. A alocação de espaço necessário para
o vetor concatenado deve ser feita dentro da função 
(a função então deve devolver para o programa principal 
o vetor alocado e também o tamanho desse novo vetor). 
A função deve retornar um valor inteiro: (0 - zero)
se a junção ocorreu de forma correta; (-1) em caso de erro.
Mostre o uso da função no programa principal. Não é
permitido criar novos tipos de dados para a solução
do exercício (ou seja, sem uso de structs).


Vetor 1: [1, 5, 2]
Vetor 2: [10, 30] 
Concatenção Vetor 1, Vetor 2

Vetor Concatenado = [ 1, 5, 2, 10, 30]

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// check:<<<erro: parece que você está resolvendo o exercício de uma prova que apliquei em outro semestre>>>>

int concatena(char *str1, char *str2, int tam1, int tam2, char *resultado, int *tam3){
    int Total = tam1 + tam2 + 1; // '/0'// check:<<<erro: pq /0 ? se o vetor é de inteiros?>>>>
    char *str3 = malloc(Total*sizeof(char));
    if(str3!=NULL){
        int i, j;
        for(i = 0; i<tam1; i++){
            str3[i] = str1[i];
        }
        for(j = 0; j<tam2; j++){
            str3[i] = str2[j];
            i++;
        }
        strcpy(resultado, str3);
        *tam3 = strlen(str3);
        return 0;
    }
    else return -1;
}

void main(){
    printf("Funcao Concatena\n\n");
    char str1[3] = {1, 5, 2};
    char str2[2] = {10, 30};
    char *str3;
    int tam3, res; 
    res = concatena(str1, str2, 3, 2, str3, &tam3);
    if(res == -1 ){printf("ERRO ao concatenar");}
    printf("Vetor Concatenado: [ ");
    for(int i = 0; i < tam3; i++){
        printf("%d, ", str3[i]);
    }
    printf("]\n\n Tamanho do Vetor Concatenado: %d", tam3);
}