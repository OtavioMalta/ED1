#include <stdio.h>

struct ponto{
    int x;
    int y;
};

void soma_ponto(struct ponto p1, struct ponto p2, struct ponto *p){
    p->x = p1.x + p2.x;
    p->y = p1.y + p2.y;
}

int main(){
    struct ponto p1;
    struct ponto p2;
    struct ponto p3;
    struct ponto *p;

    printf("Digite o valor de x1: ");
    scanf("%d", &p1.x);  

    printf("Digite o valor de y1: ");
    scanf("%d", &p1.y);  

    printf("Digite o valor de x2: ");
    scanf("%d", &p2.x);  

    p = &p3;

    printf("Digite o valor de y2: ");
    scanf("%d", &p2.y);  
    
    soma_ponto(p1,p2,p);

    printf("\nA soma de (%d,%d) com (%d,%d) eh (%d,%d)", p1.x,p1.y,p2.x,p2.y,p->x,p->y);
    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Crie um procedimento idêntico ao exercício anterior, mas que 
agora retorne void e coloque o resultado da soma no terceiro 
argumento da função.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/