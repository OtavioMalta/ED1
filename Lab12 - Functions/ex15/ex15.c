#include <stdio.h>

struct ponto{
    int x, y;
};
void inc_dir(struct ponto *pp, char d){
    if(d=='n'){
        pp->y += 1;
    }else if(d=='s'){
        pp->y -= 1;
    }else if(d=='l'){
        pp->x += 1;
    }else if(d=='o'){
        pp->x -= 1;
    }
}
int main(){
    struct ponto *pp;
    char d = 'l';    
    pp->x = 2;
    pp->y = 4;

    printf("(%d,%d)", pp->x,pp->y);

    inc_dir(pp,d);
    if(d=='n'){
        printf("Norte => (%d,%d)", pp->x,pp->y);
    }else if(d=='s'){
        printf("Sul => (%d,%d)", pp->x,pp->y);
    }else if(d=='l'){
        printf("Leste => (%d,%d)", pp->x,pp->y);
    }else if(d=='o'){
        printf("Oeste => (%d,%d)", pp->x,pp->y);
    }
    return 0;
}

/*
=> Faça um procedimento chamado inc_dir, que faz o ponto 
andar uma unidade para leste, oeste, norte, sul (passar como 
referência e retorno void)

Exemplo de chamada:
inc_dir(p,'l'); // anda uma unidade para o leste (incrementa x)
inc_dir(p,'o'); // anda uma unidade para o oeste (decrementa x)

-------------------------------------------------------------------------------
Exemplo de Saída:

(1,3) norte => (1,4)
(2,4) leste => (3,4)
-------------------------------------------------------------------------------
*/