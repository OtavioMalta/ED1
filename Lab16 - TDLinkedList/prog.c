#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TDLinkedList.h"

int main(){
    printf("Iniciando...\n\n");
    TDLinkedList *alunos;
    alunos = list_create();
    printf("Lista criada\n");
    int temp;
    struct aluno a,b,c,d,e,f,g;
    strcpy(a.nome,"aaa");
    a.matricula = 1;
    
    strcpy(b.nome,"bbb");
    b.matricula = 2;
    
    strcpy(c.nome,"ccc");
    c.matricula = 3;
    
    strcpy(d.nome,"ddd");
    d.matricula = 4;
   
    strcpy(e.nome,"eee");
    e.matricula = 5;
    
    temp = list_push_front(alunos, a);
    if(temp!=0){printf("ERRO ao adicionar!\n");}
    
    temp = list_push_front(alunos, c);
    if(temp!=0){printf("ERRO ao adicionar!\n");}

    temp = list_push_back(alunos, e);
    if(temp!=0){printf("ERRO ao adicionar!\n");}


    temp = list_insert(alunos, 4,b);
    if(temp!=0){printf("ERRO ao adicionar -insert!\n");}

    temp = list_print_forward(alunos);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    
    int tam = list_size(alunos);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{printf("Tamanho da lista: %d", tam);}

    temp = list_front(alunos,&f);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{printf("\n\nO primeiro aluno e %d\n\n", f.matricula);}

    temp = list_back(alunos,&g);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{printf("\n\nO ultimo aluno e %d\n\n", g.matricula);}

    int p;
    temp = list_get_pos(alunos,5,&p);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{printf("\n\nO aluno de matricula 5 esta na posicao %d\n\n", p);}

    temp = list_find_mat(alunos,2,&f);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{printf("\n\nO aluno de matricula 2 e %s\n\n", f.nome);}

    temp = list_find_pos(alunos,2,&f);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{printf("\n\nO aluno na posicao 2 e %s\n\n", f.nome);}
   
    temp = list_print_forward(alunos);
    if(temp!=0){printf("ERRO ao imprimir!\n");}

    temp = list_pop_front(alunos);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{list_print_forward(alunos);}

    temp = list_erase(alunos, 4);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{list_print_forward(alunos);}

    temp = list_erase(alunos,2);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{list_print_forward(alunos);}

    tam = list_size(alunos);
    printf("%d",tam);
    temp = list_erase(alunos,1);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{list_print_forward(alunos);}


    tam = list_size(alunos);
    printf("%d",tam);
    temp = list_erase(alunos,2);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{list_print_forward(alunos);}

    temp = list_erase(alunos,1);
    if(temp!=0){printf("ERRO ao imprimir!\n");}
    else{list_print_forward(alunos);}

    temp = list_free(alunos);
    if(temp!=0){printf("ERRO ao liberar a lista!");
    }else{printf("Sucesso ao liberar a lista!");}
}