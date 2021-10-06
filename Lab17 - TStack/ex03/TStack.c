#include "TStack.h"
#include <stdlib.h>
#include <stdio.h>

struct TStack{
    int qtd;
    struct chr data[MAX];
};

TStack *stack_create(int size){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st != NULL){
        st->qtd = 0;
    }
    return st;
}

int stack_free(TStack *st){
    if(st == NULL){return INVALID_NULL_POINTER;}
    free(st);
    return SUCCESS;
}

int stack_push(TStack *st, struct chr *c){
    if(st == NULL){return INVALID_NULL_POINTER;}
    if(st->qtd == MAX){return OUT_OF_RANGE;}
    st->data[st->qtd] = *c;
    st->qtd++;
    return SUCCESS;
}

int stack_pop(TStack *st){
    if(st == NULL){return INVALID_NULL_POINTER;}
    if(st->qtd <= 0){return OUT_OF_RANGE;}
    st->qtd--;
    return SUCCESS;
}

int stack_top(TStack *st, struct chr *c){
    if(st == NULL){return INVALID_NULL_POINTER;}
    if(st->qtd <= 0){return OUT_OF_RANGE;}
    *c = st->data[st->qtd-1];
    return SUCCESS;
}

int stack_empty(TStack *st){
    if(st == NULL){return INVALID_NULL_POINTER;}
    return (st->qtd == 0);
}

int stack_full(TStack *st){
    if(st == NULL){return INVALID_NULL_POINTER;}
    return (st->qtd == MAX);
}

int stack_print(TStack *st){
    if(st == NULL){return INVALID_NULL_POINTER;}
    if(st->qtd <= 0){return OUT_OF_RANGE;}
    for (int i = 0; i < st->qtd; i++)
    {
        printf("\n----------------------");
        printf("\nstruct chr: %c", st->data[i]);
        
    }
    return SUCCESS;
}