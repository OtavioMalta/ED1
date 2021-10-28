#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_RANGE -2
#define OUT_OF_MEMORY -3
#define ELEM_NOT_FOUND -4

struct aluno
{
    int matricula;
    char nome[30]; 
    float n1, n2, n3;
};

typedef struct CircList Lista;

Lista *list_create();
int list_free(Lista *li);

int push_front(Lista *li, struct aluno al);
int push_back(Lista *li, struct aluno al);

int list_size(Lista *li);
int pop_back(Lista *li);
int pop_front(Lista *li);
int empty_list(Lista *li);
void list_print(Lista *li);