#include <stdio.h>
#include <stdlib.h>
#include "TQueue.h"
#include <string.h>

int main()
{
    int res;
    struct aluno *aux;
    aux = malloc(sizeof(struct aluno));
    struct aluno a, b, c;
    a.matricula = 1;
    strcpy(a.nome, "Rodrigo");
    a.n1 = 1; a.n2 = 1; a.n3 = 1;
    b.matricula = 2;
    strcpy(b.nome, "Caio");
    b.n1 = 2; b.n2 = 2; b.n3 = 2;
    c.matricula = 3;
    strcpy(c.nome, "Luana");
    c.n1 = 3; c.n2 = 3; c.n3 = 3;

    TQueue *q;
    q = queue_create(2);
    if(q == NULL){
        printf("\n[Erro] Nao foi possivel criar a fila!\n\n");
    } else {
        printf("\nFila criada com sucesso!\n");
    }

    res = queue_push(q, a);
  
   
    res = queue_push(q, b);
    
    res = queue_push(q, c);
   


    res = queue_consult(q, aux);
    if(res == SUCCESS){
        printf("\nPrimeiro\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Nome: %s\n", aux->nome);
        printf("Notas: %f;  %f;  %f\n", aux->n1, aux->n2, aux->n3);
    }else{
        printf("[ERRO] Nao foi possivel consultar a lista!");
    } 

    res = queue_pop(q);
    if(res == SUCCESS){printf("\nElemento removido com suscesso!\n");}
    else if(res == OUT_OF_RANGE){printf("\nLista vazia! Impossivel remover elemento!\n");} 
    else {printf("\nErro ao remover elemento!\n");}


    res = queue_consult(q, aux);
    if(res == SUCCESS){
        printf("\nPrimeiro\n");
        printf("Matricula: %d\n", aux->matricula);
        printf("Nome: %s\n", aux->nome);
        printf("Notas: %f;  %f;  %f\n", aux->n1, aux->n2, aux->n3);
    }else{
        printf("[ERRO] Nao foi possivel consultar a lista!");
    } 
    
    free(aux);

    res = queue_free(q);
    if(res == SUCCESS){
        printf("Sucesso ao liberar a lista!\n");
    }
    return 0;
}