#include <stdio.h>
#include "TVarSeqList.h"
#include <string.h>

int main()
{
    Lista *alunos_pet = NULL;
    alunos_pet = criar_lista(3);
    int matricula;
    
    struct aluno aluno;
    
    // Criando uma lista de 3 alunos
    for (int i = 0; i < 3; i++)
    {
        printf("Dados do alunos %d:", i+3);
        scanf("%d", &matricula);
        aluno.matricula = matricula;
        int ret=insere_lista_ordenada(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\n[Erro]");
        }
    }
    if(lista_cheia){
        printf("\nLista cheia!\n");
    }
    int k = tamanho_lista(alunos_pet);
    printf("Tamanho: %d\n\n", k);

    // Inserindo mais 4 alunos
    for (int i = 0; i < 4; i++) 
        {
            printf("Dados do alunos %d:", i+1);
            scanf("%d", &matricula);
            aluno.matricula = matricula;
            int ret=insere_lista_ordenada(alunos_pet, aluno);
            if (ret == -1 ){
                printf("\n[Erro]");
        }
    }
    
    printf("\n-------------------------\n");
    k = tamanho_lista(alunos_pet);
    printf("\nTamanho da lista: %d\n", k);
    int alunos = quantidade_alunos(alunos_pet);
    printf("Quantidade de alunos: %d", alunos);
    printf("\n\n-------------------------\n");

    // Removendo um aluno
    printf("\nRemovendo aluno de matricula 2...\n");
    int r = remove_lista_otimizado(alunos_pet,2);
    if(r == -1){
        printf("[ERRO]\n");
    }

    k = tamanho_lista(alunos_pet);
    printf("\n-------------------------\n");
    printf("\nTamanho da lista: %d\n", k);
    alunos = quantidade_alunos(alunos_pet);
    printf("Quantidade de alunos: %d", alunos);

    if(lista_cheia(alunos_pet)){
        printf("\nLista cheia!\n");
    }else{
        printf("\n\n-------------------------\n\n");
        printf("Compactando a lista...\n");
        k = compactar_lista(alunos_pet);
        if(k == -1){
            printf("Erro ao compactar!");
        }
    }
    k = tamanho_lista(alunos_pet);
    printf("Tamanho da lista: %d\n", k);
    printf("\n\n-------------------------\n\n");

    libera_lista(alunos_pet);
}