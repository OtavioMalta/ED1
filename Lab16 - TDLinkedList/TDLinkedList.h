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

TDLinkedList *list_create();//OK
int list_free(TDLinkedList *list);//OK

int list_push_front(TDLinkedList *list, struct aluno al);//OK
int list_insert(TDLinkedList *list, int pos, struct aluno al);//OK
int list_print_forward(TDLinkedList *list);//OK
int list_print_reverse(TDLinkedList *list);//OK

int list_push_back(TDLinkedList *li, struct aluno al);//OK
int list_size(TDLinkedList *li);//OK
int list_pop_front(TDLinkedList *li);//OK 
int list_pop_back(TDLinkedList *li);//OK 
int list_erase(TDLinkedList *li, int pos );//OK 
int list_find_pos(TDLinkedList *li, int pos, struct aluno *al);//OK
int list_find_mat(TDLinkedList *li, int nmat, struct aluno *al);//OK   
int list_front(TDLinkedList *li, struct aluno *al);//OK
int list_back(TDLinkedList *li, struct aluno *al);//OK
int list_get_pos(TDLinkedList *li, int nmat , int *pos);//OK