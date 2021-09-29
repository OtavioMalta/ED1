#include <stdio.h>
#include "TLinkedList.h"
#include <stdlib.h>

typedef struct list_node list_node;

struct list_node
{
    struct aluno data;
    list_node *next;
};

struct TLinkedList
{
    list_node *head;
};

TLinkedList *list_create()
{
    TLinkedList *list;
    list = malloc(sizeof(TLinkedList));
    if (list != NULL)
    {
        list->head = NULL;
    }
    return list;
}

int list_push_front(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = list->head;

        list->head = node;
        return SUCCESS;
    }
}

int list_push_back(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;
        node->next = NULL;

        if (list->head == NULL)
        {
            list->head = node;
        }
        else
        {
            list_node *aux;
            aux = list->head;
            while (aux->next != NULL)
            {
                aux = aux->next;
            }
            aux->next = node;
        }
        return SUCCESS;
    }
}

int list_print(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;
        printf("\nImprimindo a lista\n");
        while (aux != NULL)
        {
            printf("\n------------------\n");
            printf("Matricula: %d\n", aux->data.matricula);
            printf("Nome: %s\n", aux->data.nome);
            printf("Notas: %f; %f; %f;\n", aux->data.n1, aux->data.n2, aux->data.n3);

            aux = aux->next;
        }
        printf("\nFim da lista \n");
        return SUCCESS;
    }
}

int list_free(TLinkedList *list)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *aux;
        aux = list->head;

        while (aux != NULL)
        {
            list->head = aux->next;
            // list->head = list->head->next;  (outra opção)
            free(aux);
            aux = list->head;
        }
        // segunda forma
        // while (list->head != NULL)
        // {
        //     aux = list->head;
        //     list->head = list->head->next;
        //     free(aux);
        // }

        free(list);
        return SUCCESS;
    }
}

int list_insert_sorted(TLinkedList *list, struct aluno al)
{
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    else
    {
        list_node *node;
        node = malloc(sizeof(list_node));
        if (node == NULL)
        {
            return OUT_OF_MEMORY;
        }
        node->data = al;

        list_node *curr; // current - nó atual
        list_node *prev; // previous - nó anterior
        prev = NULL;
        curr = list->head;
        while ((curr != NULL) && curr->data.matricula < al.matricula)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == NULL)  // insere na cabeça (lista vazia ou não)
        {
            node->next = list->head;
            list->head = node;
        }
        else
        {// insere a partir do segundo elemento (incluso)
            prev->next = node;
            node->next = curr;
        }
        return SUCCESS;
    }
}

int list_insert(TLinkedList *list, int pos, struct aluno al){
    if(pos < 1 || pos > list_size(list)+1){
        return OUT_OF_RANGE;
    }
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    
    list_node *n,*aux,*aux2;
    n = malloc(sizeof(list_node));
    if (n == NULL)
    {
        return OUT_OF_MEMORY;
    }
    if(pos == 1){
        aux = list->head->next;
        list->head->data =al;
        list->head->next = aux;
        return SUCCESS;
    }
    aux = NULL;
    n->data = al;
    n->next = NULL;
    aux2 = list->head;
    int i = 1;
    while(i<pos){
        i++;
        aux = aux2;        //anterior
        aux2 = aux2->next;    //atual
    }
    aux->next = n;
    n->next = aux2;
    return SUCCESS;
}

int list_size(TLinkedList *list){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    int i = 0;
    list_node *aux;
    aux = list->head;
    while(aux!=NULL){
        i++;
        aux = aux->next;
    }
    return i;
}

int list_front(TLinkedList *list, struct aluno *al){
    if (list == NULL) return INVALID_NULL_POINTER;
    *al = list->head->data;
    return SUCCESS;
}

int list_back(TLinkedList *list, struct aluno *al){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    list_node *aux;
    aux = list->head;

    while(aux->next != NULL){
        aux = aux->next;
    }
    *al = aux->data;
    return SUCCESS;
}

int list_get_pos(TLinkedList *list, int mat, int *pos){
    if (list == NULL)
    {
        return INVALID_NULL_POINTER;
    }
    list_node *aux;
    aux= list->head;
    int p = 1;
    while(aux->data.matricula != mat){
        aux = aux->next;
        p++;
    }
    *pos = p;
    return SUCCESS;
}

int list_pop_front(TLinkedList *list){
    if (list == NULL)
        {
            return INVALID_NULL_POINTER;
        }
    if(list->head == NULL){
        return ELEM_NOT_FOUND;
    }
    list_node *aux;
    aux = list->head->next;
    free(list->head);
    list->head = aux;
}

int list_pop_back(TLinkedList *list){
    if (list == NULL)
        {
            return INVALID_NULL_POINTER;
        }
    if(list->head == NULL){
        return ELEM_NOT_FOUND;
    }
    list_node *curr, *prev = NULL;
    curr = list->head;
    while(curr->next != NULL){
        prev = curr;
        curr = curr->next;
    }
    if(prev == NULL){
        free(curr);
        list->head == NULL;
        return SUCCESS;
    }
    free(curr);
    prev->next = NULL;
    return SUCCESS;
}

int list_erase_data(TLinkedList *list, int mat){
    if (list == NULL)
        {
            return INVALID_NULL_POINTER;
        }
    if(list->head == NULL){
        return ELEM_NOT_FOUND;
    }
    list_node *curr, *prev = NULL;
    curr = list->head;
    while(curr->data.matricula != mat){
        prev = curr;
        curr = curr->next;
        if(curr == NULL){
            return OUT_OF_RANGE;
        }
    }
    if(prev == NULL){
        free(curr);
        list->head == NULL;
        return SUCCESS;
    }
    prev->next = curr->next;
    free(curr);
    return SUCCESS;
}

int list_erase_pos(TLinkedList *list, int pos){
    if (list == NULL)
        {
            return INVALID_NULL_POINTER;
        }
    if(pos>list_size(list)){
        return OUT_OF_RANGE;
    }
    list_node *curr, *prev = NULL;
    curr = list->head;
    int p = 1;
    while(p<pos){
        if(curr == NULL){
            return OUT_OF_RANGE; // Só pra ter certeza
        }
        p++;
        prev = curr;
        curr = curr->next;

    }
    if(prev == NULL){
        free(curr);
        list->head == NULL;
        return SUCCESS;
    }
    prev->next = curr->next;
    free(curr);
    return SUCCESS;
}

int list_find_pos(TLinkedList *list, int pos, struct aluno *al){
    if (list == NULL)
        {
            return INVALID_NULL_POINTER;
        }
    if(pos>list_size(list)){
        return OUT_OF_RANGE;
    }
    list_node *curr;
    curr = list->head;
    int p = 1;
    while(p<pos){
        if(curr == NULL){
            return OUT_OF_RANGE; // Só pra ter certeza
        }
        p++;
        curr = curr->next;
    }
    *al = curr->data;
    return SUCCESS;
}

int list_find_mat(TLinkedList *list, int nmat, struct aluno *al){
    if (list == NULL)
        {
            return INVALID_NULL_POINTER;
        }
    list_node *curr;
    curr = list->head;
    while(curr!=NULL){
        if(curr->data.matricula == nmat){
            *al = curr->data;
            return SUCCESS;
        }else{
            curr = curr->next;
        }
    }
    return ELEM_NOT_FOUND;
}
