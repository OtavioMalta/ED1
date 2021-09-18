#define MAX 100

struct aluno{
    int matricula;
};

typedef struct lista Lista;

int quantidade_alunos(Lista* li); // OK

// EX02
Lista* criar_lista(); // OK
void reallocar_lista(Lista *li); // OK
int compactar_lista(Lista *li);

//EX01
void libera_lista(Lista* li); // OK
int consulta_lista_pos(Lista* li, int pos, struct aluno *al); // OK
int consulta_lista_mat(Lista* li, int mat, struct aluno *al); // OK
int insere_lista_final(Lista* li, struct aluno al); // OK
int insere_lista_inicio(Lista* li, struct aluno al); // OK
int insere_lista_ordenada(Lista* li, struct aluno al); // OK
int remove_lista(Lista* li, int mat); // OK
int remove_lista_inicio(Lista* li); // OK
int remove_lista_final(Lista* li); // OK
int tamanho_lista(Lista* li); // OK
int lista_cheia(Lista* li); // OK
int lista_vazia(Lista* li); // OK
int imprime_lista(Lista* li); // OK
int remove_lista_otimizado(Lista* li, int mat); // OK
