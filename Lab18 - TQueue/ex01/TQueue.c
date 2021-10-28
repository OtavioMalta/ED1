#include "TQueue.h"
#include <stdio.h>
#include <stdlib.h>

struct fila{
    struct TLinkedList *data;
};

TQueue *create(){
    TQueue *q;
    q= malloc(sizeof(TQueue));
    if(q != NULL){
        q->data = list_create();
    }

    if(q->data == NULL){
        free(q);
    }else{
        return q;
    }
}

int queue_free(TQueue *q){
    if(q == NULL){
        return INVALID_NULL_POINTER;
    }

    if(q->data != NULL){
        list_free(q->data);

    }
    free(q);
    return SUCCESS;
}

int queue_push(TQueue *q, struct aluno al){
    if(q == NULL){
        return INVALID_NULL_POINTER;
    }

    int aux = list_push_back(q->data, al);

    return aux;
}

int queue_print(TQueue *q){
    if(q == NULL){
        return INVALID_NULL_POINTER;
    }
    
    int aux = list_print(q->data);
    return aux;
}