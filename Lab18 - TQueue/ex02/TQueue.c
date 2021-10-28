#include "TQueue.h"
#include <stdio.h>
#include <stdlib.h>

struct NQueue
{
    struct aluno data;
    struct NQueue *next;
};

struct Queue 
{
    int qtd;
    struct NQueue *head;
    struct NQueue *end;
};

typedef struct NQueue NQueue;

TQueue *create_queue(){
    TQueue *q;
    q = malloc(sizeof(TQueue));
    if(q != NULL){
        q->qtd = 0;
        q->head = NULL;
        q->end = NULL;
    }

    return q;
}

int free_queue(TQueue *q){
    if(q == NULL){return INVALID_NULL_POINTER;}
        
    NQueue  *aux, *node;
    node = q->head;
    aux = NULL;

    while(node != NULL){
        aux = node;
        node = node->next;
        free(aux);
    }
    free(q);
    return SUCCESS;
}

int queue_push(TQueue *q, struct aluno al){
    if(q == NULL){return INVALID_NULL_POINTER;}
    if(q->qtd == MAX){return OUT_OF_RANGE;}

    NQueue *node;
    node = malloc(sizeof(NQueue));
    node->data = al; 
    node->next = NULL;

    if(q->head == NULL){
        q->head = node; 
    }
    if(q->end == NULL){
        q->end = node;
    }
    q->end->next = node;
    q->qtd++; 
    return SUCCESS;
}

int queue_pop(TQueue *q){
    if(q == NULL){return INVALID_NULL_POINTER;}
    if(q->qtd == 0){return OUT_OF_RANGE;}

    if(q->head->next == NULL){
        free(q->head); 
        q->end = NULL; 
    }else{
        NQueue *node; 
        node = malloc(sizeof(NQueue));
        node = q->head->next; 
        free(q->head); 
        q->head = node; 
    }

    q->qtd--; 
    return SUCCESS;
}

int queue_consult(TQueue *q, struct aluno *al){
    if(q == NULL){return INVALID_NULL_POINTER;}
    if(q->qtd == 0){return OUT_OF_RANGE;}
        
    *al = q->head->data;
    return SUCCESS;
}