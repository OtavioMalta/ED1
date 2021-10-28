#include <stdio.h>
#include <stdlib.h>
#include "TCircList.h"

typedef struct Elem Elem;

struct Elem {
    struct aluno dados;
    Elem *next;
};

struct CircList{
    Elem *end;
};

Lista *list_create(){
    Lista *li;
    li = malloc(sizeof(Lista));
    if(li != NULL){
        li->end = NULL;
    }
    return li;
}

int list_free(Lista *li){
    if(li == NULL) 
        return INVALID_NULL_POINTER;
    if(li->end == NULL) // lista vazia
        return OUT_OF_RANGE;
    Elem *aux, *no;
    no = li->end;
    while (no->next != (li->end)){
        aux = no;
        no = no->next;
        free(aux);
    }
    free(no);
    free(li);
    return SUCCESS;
}

int empty_list(Lista *li){
    if(li == NULL)
        return INVALID_NULL_POINTER;
    if((li->end) == NULL)
        return SUCCESS;
    return OUT_OF_MEMORY;
}

int push_front(Lista *li, struct aluno a){
    if(li==NULL){return INVALID_NULL_POINTER;}

    Elem *n;
    n = malloc(sizeof(Elem));

    if(n==NULL){return OUT_OF_MEMORY;}
    if(li->end==NULL){
        li->end=n;
        n->next = n;
        }
    n->dados = a;

    n->next = li->end->next;
    li->end->next=n;

    return SUCCESS;
}

int push_back(Lista *li, struct aluno a){
    if(li==NULL){return INVALID_NULL_POINTER;}

    Elem *n;
    n = malloc(sizeof(Elem));

    if(n==NULL){return OUT_OF_MEMORY;}
    if(li->end==NULL){
        li->end=n;
        n->next = n;
        }

    n->dados = a;

    n->next = li->end->next;
    li->end->next = n;
    li->end = n;

    return SUCCESS;
}
int list_size(Lista *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    Elem *aux;
    int c=0;

    if(li->end==NULL){
        return c;;
    }
    aux = li->end;
    c++;
    while(aux->next!=li->end){
        c++;
        aux = aux->next;
    }
    return c;
}

void list_print(Lista *li){
    if(li==NULL){
        return INVALID_NULL_POINTER;
    }
    Elem *aux, *prox;
    aux = li->end;
    int p = 0, tam = list_size(li);
    while(p < tam){
        aux = aux->next;

        printf("\n-------------------------\n");
        printf("Matricula: %d\n", aux->dados.matricula);
        printf("Nome: %s\n", aux->dados.nome);
        printf("Notas: %.1f.. %.1f.. %.1f;\n", aux->dados.n1, aux->dados.n2, aux->dados.n3);
        p++;
    }
}

int pop_front(Lista *li){
    if(li==NULL){return INVALID_NULL_POINTER;}
    if(li->end==NULL){return ELEM_NOT_FOUND;}
    Elem *aux;
    if(li->end == li->end->next){
        li->end = NULL;
    }
    aux = li->end->next;
    li->end->next = li->end->next->next;
    free(aux);

    return SUCCESS;
}

int pop_back(Lista *li){
    if(li==NULL){return INVALID_NULL_POINTER;}
    if(li->end==NULL){return ELEM_NOT_FOUND;}
    Elem *aux;
    if(li->end == li->end->next){
        li->end = NULL;
    }
    aux = li->end->next;
    while(aux->next!=li->end){
        aux = aux->next;
    }
    aux->next = li->end->next;
    free(li->end);
    li->end = aux;

    return SUCCESS;
}
