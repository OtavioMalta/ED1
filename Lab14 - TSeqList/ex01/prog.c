#include <stdio.h>
#include "TSeqList.h"
#include <string.h>

int main()
{
    Lista *alunos_pet, *alunos_enade = NULL;
    alunos_pet = cria_lista();
    alunos_enade = cria_lista();

    int matricula;
    char nome[30];
    float n1, n2, n3;

    struct aluno aluno;
    
    for (int i = 0; i < 8; i++)
    {
        printf("Dados do alunos:");
        scanf("%d%s%f%f%f", &matricula, nome, &n1, &n2, &n3);

        aluno.matricula = matricula;
        strcpy(aluno.nome, nome);
        aluno.n1 = n1;
        aluno.n2 = n2;
        aluno.n3 = n3;

        /*int ret=insere_lista_inicio(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\nErro: lista cheia");
        }
        int ret=insere_lista_final(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\nErro: lista cheia");
        }*/
        int ret=insere_lista_ordenada(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\nErro: lista cheia");
        }
        
        if (aluno.n1 >60){
            insere_lista_final(alunos_enade,aluno);
        }
    }

    struct aluno a;
    consulta_lista_pos(alunos_pet,1,&a);

    printf("\n-------------------------\n");
    imprime_lista(alunos_pet);
    printf("\nMatricula do aluno na posicao 1: %d",a.matricula);
    // printf("\nenade\n");
    // imprime_lista(alunos_enade);

    printf("\nRemovendo um aluno\n");
    remove_lista(alunos_pet, 3);
    imprime_lista(alunos_pet);

    printf("\nRemovendo um aluno do inicio\n");
    remove_lista_inicio(alunos_pet);
    imprime_lista(alunos_pet);

    printf("\nRemovendo um aluno do final\n");
    remove_lista_final(alunos_pet);
    imprime_lista(alunos_pet);

    printf("\nRemovendo um aluno (otimizado)\n");
    remove_lista_otimizado(alunos_pet, 5);
    imprime_lista(alunos_pet);
    libera_lista(alunos_pet);
}