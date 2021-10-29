/* ex02
Uma das utilidades das listas circulares dinâmicas é a possibilidade de percorrer
todos os elementos por diversas vezes em um loop. Modifique o TAD para incluir uma
função que retornará sempre o próximo elemento. Por exemplo, se a lista não foi
percorrida ainda, o próximo elemento é a cabeça. Depois, ao chamar a função
novamente, será devolvido o segundo elemento, e assim sucessivamente.
(a) mostrar como fica a estrutura do TAD
(b) mostrar a função que retorna o próximo elemento
*Não é necessário mostrar as outras funções afetadas pela modificação proposta

(c) Qual a diferença entre o vetor de acesso circular usado na 
implementação de uma fila estática de uma lista circular?
// responder aqui:

A diferença é que o vetor de acesso circular possui um ponteiro para o inicio da fila
e um para o próximo espaço a ser preenchido. Dessa forma tanto as funções de inserção 
quanto de remoção se tornam O(1), pois em uma fila estas funções acessam apenas as extremidades.
Na lista circular, há apenas um ponteiro apontando para o final da lista (já que a partir deste
é possível acessar tanto o último quanto o primeiro elemento) assim funções de inserção e 
remoção (exceto as no início e no final da fila) se tornam O(n), pois vão precisar percorrer 
a fila para encontrar o espaço solicitado.

*/
#include <stdio.h>

//A
//.c
typedef struct Elem Elem;

struct Elem {
    struct aluno dados;
    Elem *next;
};
struct CircList{
    Elem *end;
    Elem *next;
};

//B
struct aluno next_li(CircList *li){
    struct aluno al = li->next->dados;
    li->next = li->next->next;
    return al;
}

/*RETORNANDO INTEIROS PARA VERIFICAÇÕES DE ERROS
int next_li(Lista *li, struct aluno *al){
    if(li==NULL){return -1;}
    if(li->next==NULL){return -2;}

    *al = li->next->dados;
    if(li->next->next == NULL){return -2;}
    li->next = li->next->next;
    return 0;
}*/