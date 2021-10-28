#include <stdio.h>

#define MAX 100
#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct Queue TQueue;

TQueue *create_queue();
int free_queue(TQueue *q);
int queue_push(TQueue *q, struct aluno al);
int queue_consult(TQueue *q, struct aluno *al);
int queue_pop(TQueue *q);
