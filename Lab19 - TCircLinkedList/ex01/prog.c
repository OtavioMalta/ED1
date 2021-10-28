#include "TCircList.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int res;
    struct aluno a, b, c;
    a.matricula = 1;
    strcpy(a.nome, "Artur");
    a.n1 = 1; a.n2 = 1; a.n3 = 1;

    b.matricula = 2;
    strcpy(b.nome, "Beatriz");
    b.n1 =2; b.n2 =2; b.n3 = 2;

    c.matricula = 3;
    strcpy(c.nome, "Caio");
    c.n1 = 3; c.n2 = 3; c.n3 = 3;

    Lista *li;
    li = list_create();
    if(li == NULL){
        printf("\nErro ao criar a lista!\n");
    } else {
        printf("\nLista criada!\n");
    }

    push_back(li, c);
    push_back(li, b);
    push_front(li, a);
    
    int tam = list_size(li);
    printf("\n\nTAMANHO DA LISTA: %d", tam);

    list_print(li);

    pop_front(li);
    pop_back(li);

    tam = list_size(li);
    printf("\n\nTAMANHO DA LISTA: %d", tam);

    res = empty_list(li);
    if(res == SUCCESS){printf("\nLista vazia\n");}
    list_print(li);

    res = list_free(li);
    if(res == SUCCESS){
        printf("\nLista liberada!\n");
    }else{
        printf("\nErro ao liberar a lista!\n");
    }

    return 0;
}