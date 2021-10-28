#include "TLinkedList.h"

typedef struct fila TQueue;

TQueue *create();

int queue_free(TQueue *q);

int queue_push(TQueue *q, struct aluno al);

int queue_print(TQueue *q);