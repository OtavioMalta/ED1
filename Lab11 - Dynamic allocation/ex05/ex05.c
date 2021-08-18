#include <stdio.h>
#include <stdlib.h>
//lembre-se de incluir as bibliotecas adequadas
struct pontos{
    int x;
    int y;
};

int main(){
    int n;
    struct pontos *p;
    struct pontos *c;
    struct pontos *b;
    struct pontos *e;
    struct pontos *d;

    printf("<< Vetor de pontos alocados dinamicamente >>\n");
    printf("Quantos pontos deseja digitar: ");
    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(struct pontos));
    c = (int*)malloc(sizeof(struct pontos));
    b = (int*)malloc(sizeof(struct pontos));
    e = (int*)malloc(sizeof(struct pontos));
    d = (int*)malloc(sizeof(struct pontos));


    for(int i = 0; i < n; i++){
        printf("\nEntre com a coordenada x do ponto %d: ",i+1);
        scanf("%d", &p[i].x);
        printf("Entre com a coordenada y do ponto %d: ",i+1);
        scanf("%d", &p[i].y);

        if(p[i].x > d->x || i ==0){
            d->x = p[i].x;
            d->y = p[i].y;
        }
        if(p[i].x < e->x || i ==0){
            e->x = p[i].x;
            e->y = p[i].y;
        }
        if(p[i].y > c->y || i ==0){
            c->x = p[i].x;
            c->y = p[i].y;
        }
        if(p[i].y < b->y || i ==0){
            b->x = p[i].x;
            b->y = p[i].y;
        }
    }

    printf("Pontos digitados: ");
    for(int t = 0; t < n; t++){
        printf("(%d,%d); ",p[t].x,p[t].y);
    }

    printf("\n\nPonto mais a esquerda: (%d,%d)",e->x,e->y);
    printf("\nPonto mais a direita: (%d,%d)",d->x,d->y);
    printf("\nPonto mais acima: (%d,%d)",c->x,c->y);
    printf("\nPonto mais abaixo: (%d,%d)",b->x,b->y);
    free(p);
    free(c);
    free(b);
    free(e);
    free(d);
    return 0;
}


/*
5) Modifique o programa anterior incluindo quatro ponteiros, que apontarão para
os seguintes pontos: mais a esquerda, mais a direita, mais acima, mais abaixo.
Mostre quem são esses pontos utilizando esses ponteiros.

Exemplo de saída:
<< Vetor de pontos alocados dinamicamente >>
Digite a quantidade de pontos a serem armazenados: 5

Digite o valor da coordenada x do ponto 1: 2
Digite o valor da coordenada y do ponto 1: 5

Digite o valor da coordenada x do ponto 2: 4
Digite o valor da coordenada y do ponto 2: 8

Digite o valor da coordenada x do ponto 3: 3
Digite o valor da coordenada y do ponto 3: 4

Digite o valor da coordenada x do ponto 4: 6
Digite o valor da coordenada y do ponto 4: 7

Digite o valor da coordenada x do ponto 5: 23
Digite o valor da coordenada y do ponto 5: 25


Os pontos digitados sao: (2,5); (4,8); (3,4); (6,7); (23,25)

Ponto mais a esquerda: (2,5)
Ponto mais a direita: (23,25)
Ponto mais acima: (23,25)
Ponto mais abaixo: (3,4)

*/