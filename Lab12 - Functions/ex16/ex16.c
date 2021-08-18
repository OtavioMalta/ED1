#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};

void ind_diag(struct ponto *pp, char d[15]){
    if(strcmp(d,"sudeste")==0){
        pp->x += 1;
        pp->y -= 1;
    }else if(strcmp(d,"sudoeste")==0){
        pp->x -= 1;
        pp->y -= 1;
    }else if(strcmp(d,"nordeste")==0){
        pp->x += 1;
        pp->y += 1;
    }else if(strcmp(d,"noroeste")==0){
        pp->x -= 1;
        pp->y += 1;
    }
}

int main(){
    struct ponto *pp;
    char d[15];
    pp = malloc(sizeof(struct ponto)); //sem malloc o codigo nao funciona 

    strcpy(d,"sudoeste");
    pp->x = 2;
    pp->y = 4;
    
    printf("\n(%d,%d)", pp->x,pp->y);

    ind_diag(pp,d);
    if(strcmp(d,"nordeste")==0){
        printf("Nordeste => (%d,%d)\n", pp->x,pp->y);
    }else if(strcmp(d,"noroeste")==0){
        printf("Noroeste => (%d,%d)\n", pp->x,pp->y);
    }else if(strcmp(d,"sudoeste")==0){
        printf("Sudoeste => (%d,%d)\n", pp->x,pp->y);
    }else if(strcmp(d,"sudeste")==0){
        printf("Sudeste => (%d,%d)\n", pp->x,pp->y);
    }

    free(pp);
    return 0;
}

/*
=> Crie um procedimento para andar na diagonal (sudeste, 
sudoeste, nordeste, noroeste). Use obrigatoriamente as funções do 
exercício anterior.

Exemplo de chamada:
ind_diag(p,"sudeste")==0; 
ind_diag(p,"sudoeste")==0;

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) sudeste => (2,2)
(2,4) sudoeste => (1,3)
-------------------------------------------------------------------------------
*/