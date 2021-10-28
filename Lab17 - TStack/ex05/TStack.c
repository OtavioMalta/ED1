#include <stdio.h>
#include "TStack.h"
#include <stdlib.h>
struct Pilha
{
    int qtd;
    char ch[MAX];
};

Pilha *stack_create(){
    Pilha *pi;
    pi = (Pilha*)malloc(sizeof(Pilha));
    if(pi != NULL){
        pi->qtd = 0;
    }
    return pi;
}

int stack_free(Pilha *pi){
    if(pi == NULL){return INVALID_POINTER_NULL;}

    free(pi);
    return SUCCESS;
}

int stack_size(Pilha *pi){
    if(pi == NULL){return INVALID_POINTER_NULL;}
    return pi->qtd;
}

int stack_full(Pilha *pi){
    if(pi == NULL){return INVALID_POINTER_NULL;}
    if(pi->qtd == MAX){
        return 1;
    }else{
        return 0;
    }
}

int stack_empty(Pilha *pi){
    if(pi == NULL){return INVALID_POINTER_NULL;}
    if(pi->qtd == 0){
        return SUCCESS;
    }else{
        return 1;
    }
}

int stack_pop(Pilha *pi){
    if(pi == NULL){return INVALID_POINTER_NULL;}
    if(pi->qtd <= 0){
        return OUT_OF_RANGE;
    }
    pi->qtd--;
    return SUCCESS;
}

int stack_consult(Pilha *pi, char *ch){
    if(pi == NULL){return INVALID_POINTER_NULL;}
    if(pi->qtd == 0){
        return OUT_OF_RANGE;
    }
    *ch = pi->ch[pi->qtd-1];
}

int stack_push(Pilha *pi, char ch){
    if(pi == NULL){return INVALID_POINTER_NULL;}
    if(stack_full){
        return OUT_OF_RANGE;
    }
    pi->ch[pi->qtd] = ch;
    pi->qtd++;
    return SUCCESS;
}