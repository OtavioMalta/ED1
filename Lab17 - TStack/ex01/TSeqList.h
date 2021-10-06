#ifndef _tseqlisth_
#define _tseqlisth_

#include "aluno.h"

#define MAX 100

typedef struct lista TSeqList;

TSeqList* cria_lista(); // OK
void libera_lista(TSeqList* li); // OK

int consulta_lista_pos(TSeqList* li, int pos, struct aluno *al); // OK
int consulta_lista_mat(TSeqList* li, int mat, struct aluno *al); // OK
int insere_lista_final(TSeqList* li, struct aluno al); // OK
int insere_lista_inicio(TSeqList* li, struct aluno al); // OK
int insere_lista_ordenada(TSeqList* li, struct aluno al); // OK
int remove_lista(TSeqList* li, int mat); // OK
int remove_lista_inicio(TSeqList* li); // OK
int remove_lista_final(TSeqList* li); // OK
int tamanho_lista(TSeqList* li); // OK
int lista_cheia(TSeqList* li); // OK
int lista_vazia(TSeqList* li); // OK
int imprime_lista(TSeqList* li); // OK
int remove_lista_otimizado(TSeqList* li, int mat); // OK


#endif
