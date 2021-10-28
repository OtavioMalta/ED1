#include <stdio.h>
#include <stdlib.h>
#include "TQueue.h"
#include <string.h>


int main()
{
    int aux;
    TQueue *q;
    q = create(); 

    if(q == NULL){
        printf("[ERRO] A fila não pode ser criada!\n\n");
    }else{
        printf("Fila criada com sucesso\n\n");
    }

    struct aluno a, b, c;

    a.matricula = 1;
    strcpy(a.nome, "Rodrigo");
    a.n1 = 1.1; a.n2 = 1.1; a.n3 = 1.1;

    b.matricula = 2;
    strcpy(b.nome, "Mario");
    b.n1 = 2; b.n2 = 2; b.n3 = 2;

    c.matricula = 3;
    strcpy(c.nome, "Silvia");
    c.n1 = 5; c.n2 = 42.; c.n3 = 8;

    queue_push(q, a);
    queue_push(q, b);
    queue_push(q, c);
    
    queue_print(q);

    aux = queue_free(q); // liberando fila
    if(aux == 0){
        printf("Fila liberada com sucesso\n");
    } else {
        printf("Erro ao liberar a fila!\n");
    }

    return 0;
}