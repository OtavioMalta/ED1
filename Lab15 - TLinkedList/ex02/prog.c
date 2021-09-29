#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "TLinkedList.h"

int main(){
    TLinkedList *alunos_pet;
    alunos_pet = list_create();
    int temp;

    struct aluno a,b,c,d,e;
    strcpy(a.nome,"aaa");
    a.matricula = 1;
    a.n1 = 1;
    a.n2 = 1;
    a.n3 = 1;
    strcpy(b.nome,"bbb");
    b.matricula = 2;
    b.n1 = 2;
    b.n2 = 2;
    b.n3 = 2;
    strcpy(c.nome,"ccc");
    c.matricula = 3;
    c.n1 = 3;
    c.n2 = 3;
    c.n3 = 3;
    strcpy(d.nome,"ddd");
    d.matricula = 4;
    d.n1 = 4;
    d.n2 = 4;
    d.n3 = 4;
    strcpy(e.nome,"eee");
    e.matricula = 5;
    e.n1 = 5;
    e.n2 = 5;
    e.n3 = 5;

    temp = list_print(alunos_pet);
    if(temp <= -1){printf("ERRO");}

    printf("1");

    temp = list_push_back(alunos_pet, c);
    if(temp <= -1){printf("ERRO");}

    temp = list_push_front(alunos_pet, a);
    if(temp <= -1){printf("ERRO");}

    temp = list_insert_sorted(alunos_pet, e);
    if(temp <= -1){printf("ERRO");}

    int tam = list_size(alunos_pet);
    printf("tamanho: %d", tam);

    temp = list_print(alunos_pet);
    if(temp <= -1){printf("ERRO");}

    struct aluno *p;
    p = malloc(sizeof(struct aluno));
    printf("\nPrimeiro aluno\n");
    temp = list_front(alunos_pet, p);
    if(temp == 0){
      printf("Matricula: %d\nAluno: %s\n", p->matricula, p->nome);
    } else {
      printf("ERRO\n");
    }

    int pos;
    list_get_pos(alunos_pet,5,&pos);
    printf("O aluno de matricula 5 esta na posicao %d", pos);

    printf("\nREMOVENDO 1");
    temp = list_pop_front(alunos_pet);
    if(temp <= -1){printf("ERRguO");}
    list_print(alunos_pet);
    list_pop_front(alunos_pet);
    list_pop_front(alunos_pet);
    printf("\n---------\n");
    list_print(alunos_pet);
    printf("\n---------\n");
    struct aluno *f;
    f = malloc(sizeof(struct aluno));
    printf("\nPrimeiro aluno\n");
    temp = list_pop_front(alunos_pet);
    if(temp == 0){
      printf("Matricula: %d\nAluno: %s\n", f->matricula, f->nome);
    } else {
      printf("ERRO\n");
    }
    return 0;
}

