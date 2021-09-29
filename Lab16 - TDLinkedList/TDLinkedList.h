#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct TDLinkedList TDLinkedList;

TDLinkedList *list_create();
int list_free(TDLinkedList *list);

int list_push_front(TDLinkedList *list, struct aluno al);
int list_insert(TDLinkedList *list, int pos, struct aluno al);
int list_print_forward(TDLinkedList *list);
int list_print_reverse(TDLinkedList *list);

