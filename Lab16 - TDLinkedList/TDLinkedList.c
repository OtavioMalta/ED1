#include <stdlib.h>
#include <stdio.h>
#include "TDLinkedList.h"

typedef struct DLNode DLNode;

struct DLNode{
    struct aluno data;
    DLNode *next;
    DLNode *prev;
};

struct TDLinkedList{
    DLNode *begin;
    DLNode *end;
    int size;
};

TDLinkedList *list_create(){
    TDLinkedList *TDL;
    TDL = malloc(sizeof(TDLinkedList));
    if(TDL!=NULL){
        TDL->begin = NULL;
        TDL->end = NULL;
        TDL->size = 0;   
    }
    return TDL;
}

int list_free(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *aux;
    aux = list->begin;
    while(aux!=list->end){
        aux = aux->next;
        free(aux->prev);
    }
    free(list->end);
    free(list);
    return SUCCESS;
}

int list_print_forward(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *aux;
    aux = list->begin;
    printf("\n-----------------------\n");
    printf("Imprimindo a lista..\n");
    while(aux!=NULL){
        printf("\nMatricula: %d ..Nome: %s\n", aux->data.matricula, aux->data.nome);
        aux = aux->next;
    }
    printf("\n-----------------------\n");
    return SUCCESS;
}

int list_print_reverse(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *aux;
    aux = list->end;
    printf("\n-----------------------\n");
    printf("Imprimindo a lista..\n");
    while(aux!=NULL){
        printf("\nMatricula: %d ..Nome: %s\n", aux->data.matricula, aux->data.nome);
        aux = aux->prev;
    }
    printf("\n-----------------------\n");
    return SUCCESS;
}

int list_push_front(TDLinkedList *list, struct aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *node;
    node = malloc(sizeof(DLNode));
    if(node == NULL){
       return  OUT_OF_MEMORY;
    }
    node->data = al;
    node->prev = NULL;
    node->next = list->begin;
    if(list->size == 0/*|| list->begin == NULL*/){
        list->end = node;
        list->begin = node;
    }else{
        list->begin->prev = node;
        list->begin = node;
    }
    list->size++;
    return SUCCESS;
}

int list_push_back(TDLinkedList *list, struct aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *node;
    node = malloc(sizeof(DLNode));
    if(node == NULL){
       return  OUT_OF_MEMORY;
    }
    node->data = al;
    node->next = NULL;
    node->prev = list->end;
    if(list->size == 0/*|| list->begin == NULL*/){
        list->end = node;
        list->begin = node;
    }else{
        list->end->next = node;
        list->end = node;
    }
    list->size++;
    return SUCCESS;
}

int list_insert(TDLinkedList *list, int pos, struct aluno al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(pos > list->size +1 || pos <= 0){
        return OUT_OF_RANGE;
    }
    DLNode *node;
    node = malloc(sizeof(DLNode));
    if(node == NULL){
       return  OUT_OF_MEMORY;
    }
    int p = 1;
    node->data = al;
    DLNode *aux;
    aux = list->begin;

    if(list->size == 0){
        node->next=NULL;
        node->prev=NULL;
        list->begin = node;
        list->end = node;
        list->size++;
        return SUCCESS;
    }

    if(pos==1){
        node->next = list->begin;
        list->begin->prev = node;
        node->prev=NULL;
        list->begin = node;
        list->size++;
        return SUCCESS;
    }

     if(pos== list->size + 1){
        node->next = NULL;
        list->end->next = node;
        node->prev=list->end;
        list->end = node;
        list->size++;
        return SUCCESS;
    }
    while(node!=NULL){
        if(pos == p){
            node->next = aux;
            node->prev = aux->prev;
            aux->prev->next = node;
            aux->prev = node;
            list->size++;
            return SUCCESS;
        }else{
            aux = aux->next;
            p++;
        }
    }
    return OUT_OF_RANGE;
}

int list_size(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    return list->size;
}

int list_front(TDLinkedList *list, struct aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    *al = list->begin->data;
    return SUCCESS;
}

int list_back(TDLinkedList *list, struct aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    *al = list->end->data;
    return SUCCESS;
}

int list_get_pos(TDLinkedList *list, int nmat , int *pos){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *aux;
    aux = list->begin;
    int i = 1;
    while(aux!=NULL){
        if(nmat == aux->data.matricula){
            *pos = i;
            return SUCCESS;
        }else{
            aux = aux->next;
            i++;
        }
    }
    return ELEM_NOT_FOUND;
}

int list_find_mat(TDLinkedList *list, int nmat, struct aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    DLNode *aux;
    aux = list->begin;
    while((aux!=NULL)){
        if(nmat == aux->data.matricula){
            *al = aux->data;
            return SUCCESS;
        }else{
            aux = aux->next;
        }
    }
    return ELEM_NOT_FOUND;
}

int list_find_pos(TDLinkedList *list, int pos, struct aluno *al){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(pos > list->size || pos <= 0){
        return OUT_OF_RANGE;
    }
    DLNode *aux;
    aux = list->begin;
    int i = 1;
    while(aux!=NULL){
        if(pos == i){
            *al = aux->data;
            return SUCCESS;
        }else{
            aux = aux->next;
            i++;
        }
    }
    return ELEM_NOT_FOUND;
}

int list_pop_front(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->begin == NULL || list->size == 0){
        return OUT_OF_RANGE;
    }
    DLNode *node;
    node = list->begin;
    list->begin = node->next;
    if(list->begin != NULL){ 
        list->begin->prev = NULL;
    }else{
        list->end = NULL;
    }
    free(node);
    list->size--;
    return SUCCESS;
}

int list_pop_back(TDLinkedList *list){
    if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->begin == NULL || list->size == 0){
        return OUT_OF_RANGE;
    }
    DLNode *node;
    node = list->end;
    list->end = node->prev;
    if(list->end != NULL){ 
        list->end->next = NULL;
    }else{
        list->begin = NULL;
    }
    free(node);
    list->size--;
    return SUCCESS;
}

int list_erase(TDLinkedList *list, int pos){
     if(list == NULL){
        return INVALID_NULL_POINTER;
    }
    if(list->begin == NULL || list->size == 0 || pos > list->size || pos < 1){
        return OUT_OF_RANGE;
    }

    DLNode *node, *aux = NULL;
    node = list->begin;
    if(pos == 1){
        list->begin = node->next;
        if(list->size == 1){
            list->end = NULL;
        }else{
            list->begin->prev = NULL;
        }
        free(node);
        list->size--;
        return SUCCESS;
    }
    int p = 1;
    while(p < pos){
        p++;
        aux = node;
        node = node->next;
    }
    if(list->end == node){
        aux->next = NULL;
        list->end = aux;
    }else{
        aux->next = node->next;
        node->next->prev = aux;
    }
    free(node);
    list->size--;
    return SUCCESS;
}