#include "aluno.h"
#define MAX 100
#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3 
#define ELEM_NOT_FOUND -4

typedef struct TQueue TQueue;

TQueue *queue_create(int n);
int queue_free(TQueue *q);
int queue_push(TQueue *q, struct aluno al);
int queue_consult(TQueue *q, struct aluno *al);
int queue_pop(TQueue *q);

int queue_increase(TQueue *q);
int queue_compact(TQueue *q);
