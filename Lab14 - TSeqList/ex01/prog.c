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
    
    for (int i = 0; i < 3; i++)
    {
        printf("Dados do alunos:");
        scanf("%d%s%f%f%f", &matricula, nome, &n1, &n2, &n3);

        aluno.matricula = matricula;
        strcpy(aluno.nome, nome);
        aluno.n1 = n1;
        aluno.n2 = n2;
        aluno.n3 = n3;

        int ret=insere_lista_inicio(alunos_pet, aluno);
        if (ret == -1 ){
            printf("\nErro: lista cheia");
        }
       // insere_lista_final(alunos_pet, aluno);
        
        if (aluno.n1 >60){
            insere_lista_final(alunos_enade,aluno);
        }
    }

    struct aluno a;
    consulta_lista_pos(alunos_pet,1,&a);
    
    imprime_lista(alunos_pet);
    printf("\nenade\n");
    //imprime_lista(alunos_enade);

    printf("\n mat %d",a.matricula);

    libera_lista(alunos_pet);
}