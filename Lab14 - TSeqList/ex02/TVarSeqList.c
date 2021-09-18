#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "TVarSeqList.h" //inclui os Protótipos

//Definição do tipo lista
struct lista
{
    int qtd;
    struct aluno *dados; // Não sei quanto alunos serão cadastrados
    int tam;
};

//EX02


Lista *criar_lista(int tam) {
  Lista *li;
  li = (Lista *)malloc(sizeof(struct lista));
  if(li!=NULL){
    li->qtd=0;
    li->dados = malloc(tam*sizeof(struct aluno));
    if(li->dados != NULL){
      li->tam= tam;
      return li;
    }
  }
  return NULL;
}


void reallocar_lista(Lista *li){

    struct aluno *al;
    al = realloc(li->dados, (2 * li->tam) * sizeof(struct aluno));
    if(al != NULL){
        li->dados = al;
        li->tam = (li->tam * 2);
    }
}


int compactar_lista(Lista *li){
  if(li == NULL || li->dados==NULL){
    return -1;
  }
  int tam = ceil(((float)li->qtd)/(float)li->tam)*li->tam;
  li->dados = realloc(li->dados, li->tam*sizeof(struct aluno));
  li->tam = tam;
  return 0;
}


int consulta_lista_pos(Lista *li, int pos, struct aluno *al){
    if (li == NULL){
        return -1;
    } 
    if (pos <=0 || pos > li->qtd)
        return -1;
    *al = li->dados[pos-1];
    return 0;
}

int insere_lista_inicio(Lista *li, struct aluno al){
    if (li == NULL){
        return -1;
    } 
    if (li->qtd == li->tam){
        reallocar_lista(li);
    }
    if(li==NULL){
        return -1;
    }

    for (int i = li->qtd - 1; i >= 0; i--)
    {
        li->dados[i + 1] = li->dados[i];
    }
    // primeira posição disponivel
    li->dados[0] = al;
    li->qtd++;
    return 0;
}

int insere_lista_final(Lista *li, struct aluno al){
    if (li == NULL){
        return -1;
    } 
    if (li->qtd == li->tam){
        reallocar_lista(li);
    }
    if (li == NULL){
        return -1;
    } 

    li->dados[li->qtd] = al;
    li->qtd++;
    return 0;
}

int insere_lista_ordenada(Lista *li, struct aluno al){
    if (li == NULL){
        return -1;
    } 
    if (li->qtd == li->tam){
        reallocar_lista(li);
    }
    if (li == NULL){
        return -1;
    } 

    int i = 0;
    while(i < li->qtd && li->dados[i].matricula < al.matricula){
        i++;
    }
    int t = li->qtd -1;
    while(t>=i){
        li->dados[t+1] = li->dados[t];
        t--;
    }
    li->dados[i] = al;
    li->qtd++;
    return 0;
}

int imprime_lista(Lista *li){
    if (li == NULL){
        return -1;
    } 

    for (int i = 0; i < li->qtd; i++)
    {
        printf("\n----------------------");
        printf("\nMatricula: %d", li->dados[i].matricula);
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

void libera_lista(Lista *li){
    free(li);
}


int consulta_lista_mat(Lista* li, int mat, struct aluno *al){
    if(li->qtd == 0 || li == NULL){
        return -1;
    }

    for(int i = li->qtd; i>=0; i--){
        if(li->dados[i].matricula == mat){
            *al = li->dados[i];
            return 0;
        }
    }

    if(al == NULL){ // Se não achar
        return -1;
    }
}

int remove_lista(Lista* li, int mat){
    if(li->qtd == 0 || li == NULL){
        return -1;
    }
    // Talvez seja mais pesado assim do que usando o while
    for(int i = 0; i < li->qtd; i++){
        if(li->dados[i].matricula == mat){
            for(int p = i; p < li->qtd; p++){
                li->dados[p] = li->dados[p+1];
            }
            i = li->qtd;
            li->qtd--;
            return 0;
        }
    }
    return 0;
}

int remove_lista_inicio(Lista* li){
    if(li->qtd == 0 || li == NULL){
        return -1;
    }
    
    for(int i = 0; i <= li->qtd; i++){
        li->dados[i] = li->dados[i+1];
    }
    li->qtd--;
    return 0;
}

int remove_lista_final(Lista* li){
    if(li->qtd == 0 || li == NULL){
        return -1;
    }
    li->qtd--;
    return 0;
}

int remove_lista_otimizado(Lista* li, int mat){
    if(li->qtd == 0 || li == NULL){
        return -1;
    }

    for(int i = 0; i < li->qtd; i++){
        if(li->dados[i].matricula == mat){
            li->qtd--;
            li->dados[i] = li->dados[li->qtd];
            return 0;
        }
    }
    return 0; // Nao encontrado
}

int tamanho_lista(Lista* li){
    if(li == NULL){
        return -1;
    }
    return li->tam;
}

int quantidade_alunos(Lista* li){
    if(li == NULL){
        return -1;
    }
    return li->qtd;
}

int lista_cheia(Lista* li){
    if(li == NULL){
        return -1;
    }
    return (li->qtd == li->tam);
}

int lista_vazia(Lista* li){
    if(li == NULL){
        return -1;
    }
    return (li->qtd == 0);
}

