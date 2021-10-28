#include <stdio.h>

#define MAX 100
#define MAX 100
#define SUCCESS 0
#define INVALID_POINTER_NULL -1
#define OUT_OF_RANGE -2
#define OUT_OF_MEMORY -3

typedef struct Pilha Pilha;

Pilha *stack_create();

int stack_free(Pilha *pi);

int stack_empty(Pilha *pi);

int stack_full(Pilha *pi);

int stack_size(Pilha *pi);

int stack_push(Pilha *pi, char ch);

int stack_pop(Pilha *pi);

int stack_consult(Pilha *pi, char *ch);
