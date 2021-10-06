#ifndef _tseqlisth_
#define _tseqlisth_

#include "aluno.h"

#define MAX 100

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

typedef struct TLinkedList TLinkedList;

TLinkedList *list_create();
int list_free(TLinkedList *list);//OK
int list_push_front(TLinkedList *list, struct aluno al);//OK
int list_push_back(TLinkedList *list, struct aluno al);//OK
int list_insert_sorted(TLinkedList *list, struct aluno al);//OK
int list_insert(TLinkedList *list, int pos, struct aluno al);//OK
int list_size(TLinkedList *list);//OK
int list_pop_front(TLinkedList *list); //OK
int list_pop_back(TLinkedList *list); //OK
int list_erase_data(TLinkedList *list, int mat); //OK
int list_erase_pos(TLinkedList *list, int pos); //OK
int list_find_pos(TLinkedList *list, int pos, struct aluno *al); //OK
int list_find_mat(TLinkedList *list, int nmat, struct aluno *al); //OK
int list_front(TLinkedList *list, struct aluno *al);//OK
int list_back(TLinkedList *list, struct aluno *al);//OK
int list_get_pos(TLinkedList *list, int nmat, int *pos);//OK
int list_print(TLinkedList *list);//OK

#endif
