#include <stdio.h>
#include <stdlib.h>
#include "TSeqList.h" //inclui os Protótipos

//Definição do tipo lista
struct lista
{
    int qtd;
    struct aluno dados[MAX];
};

Lista *cria_lista()
{
    Lista *li;
    li = (Lista *)malloc(sizeof(struct lista));
    if (li != NULL)
    {
        li->qtd = 0;
    }
    return li; 
}

int insere_lista_final(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == MAX) //lista cheia
        return -1;
    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int consulta_lista_pos(Lista *li, int pos, struct aluno *al)
{
    if (li == NULL)
        return -1;
    if (pos <=0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}

int insere_lista_inicio(Lista *li, struct aluno al)
{
    if (li == NULL)
        return -1;
    if (li->qtd == MAX) //lista cheia
        return -1;
    // deslocando os elementos
    for (int i = li->qtd - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }
    // primeira posição disponivel
    li->dados[0] = al;
    li->qtd++;
    return 0;
}

int imprime_lista(Lista *li)
{
    if (li == NULL)
        return -1;

    for (int i = 0; i < li->qtd; i++)
    {
        printf("\nMatricula: %d\n", li->dados[i].matricula);
        printf("\nNome: %s\n", li->dados[i].nome);
        printf("Notas: %f;%f;%f\n", li->dados[i].n1, li->dados[i].n2, li->dados[i].n3);
    }
    /*
    struct aluno temp;

    for (int i = 0; i < li->qtd; i++){
        temp = li->dados[i];
        printf("\nMatricula: %d\n", temp.matricula);
        printf("\nNome: %s", temp.nome);
        printf("Notas: %f;%f;%f", temp.n1, temp.n2, temp.n3);
    }
    */
    return 0;
}

void libera_lista(Lista *li)
{
    free(li);
}
