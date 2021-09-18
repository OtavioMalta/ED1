#include <stdio.h>
#include "TVarSeqList.h"
#include <string.h>

int main()
{
    Lista *alunos_pet = NULL;
    alunos_pet = criar_lista(20);
    int matricula;
    

    struct aluno aluno;
    
    // Criando uma lista de 3 alunos
    for (int i = 0; i < 20; i++)
    {
        printf("Dados do alunos %d:", i+1);
        scanf("%d", &matricula);

        aluno.matricula = matricula;
        
        /*int ret=insere_lista_inicio(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\n[Erro]");
        }
        int ret=insere_lista_final(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\n[Erro]");
        }*/
        int ret=insere_lista_ordenada(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\n[Erro]");
        }
    }
    if(lista_cheia){
        printf("\nLista cheia!\n");
    }
    int k = tamanho_lista(alunos_pet);
    printf("Tamanho: %d\n", k);

    // Inserindo mais 3 alunos
    for (int i = 0; i < 3; i++) // Ta f
        {
            printf("\nDados do alunos %d: \n", i+3);
            scanf("%d", &matricula);

            aluno.matricula = matricula;

            int ret=insere_lista_final(alunos_pet, aluno);
            if (ret == -1 ){
                printf("\n[Erro]");
        }
    }
    printf("\n-------------------------\n");
    k = tamanho_lista(alunos_pet);
    printf("\ntamanho da lista: %d\n", k);

    int alunos = quantidade_alunos(alunos_pet);
    printf("Quantidade de alunos: %d", alunos);

    if(lista_cheia(alunos_pet)){
        printf("\nLista cheia!\n");
    }else{
        printf("\nCompactando a lista...\n");
        k = compactar_lista(alunos_pet);
        if(k == -1){
            printf("Erro ao compactar!");
        }
    }
    imprime_lista(alunos_pet);
    k = tamanho_lista(alunos_pet);
    printf("\ntamanho da lista: %d\n", k);


    struct aluno a;
    consulta_lista_pos(alunos_pet,20,&a);

    printf("\n-------------------------\n");
    printf("\nMatricula do aluno na posicao 1: %d\n",a.matricula);

    printf("\n\nRemovendo o aluno de matricula 3\n");
    remove_lista(alunos_pet, 3);
    imprime_lista(alunos_pet);

    printf("\n\nRemovendo um aluno do inicio\n");
    remove_lista_inicio(alunos_pet);
    imprime_lista(alunos_pet);

    printf("\n\nRemovendo um aluno do final\n");
    remove_lista_final(alunos_pet);
    imprime_lista(alunos_pet);

    printf("\n\nRemovendo o aluno de matricula 5 (otimizado)\n");
    remove_lista_otimizado(alunos_pet, 5);
    imprime_lista(alunos_pet);
    libera_lista(alunos_pet);
}