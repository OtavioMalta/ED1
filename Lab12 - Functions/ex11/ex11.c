#include <stdio.h>

struct ponto{
    int x;
    int y;
};

struct ponto soma_ponto(struct ponto p1, struct ponto p2){
    struct ponto p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    return p3;
}

int main(){
    struct ponto p1;
    struct ponto p2;
    struct ponto p3;

    printf("Digite o valor de x1: ");
    scanf("%d", &p1.x);  

    printf("Digite o valor de y1: ");
    scanf("%d", &p1.y);  

    printf("Digite o valor de x2: ");
    scanf("%d", &p2.x);  

    printf("Digite o valor de y2: ");
    scanf("%d", &p2.y);  

    p3 = soma_ponto(p1,p2);

    printf("A soma de (%d,%d) com (%d,%d) eh (%d,%d)", p1.x,p1.y,p2.x,p2.y,p3.x,p3.y);



    return 0;
}

/*
Observação: Lembre-se de utilizar a struct chamada ponto, que 
armazena dois números reais que representam coordenadas cartesianas.

=> Faca uma função que some dois pontos e retorne o resultado 
da soma. Mostre os 3 pontos usando a função imprime_ponto.

Exemplo:
ponto p1, p2, p3;
p3= soma_ponto(p1,p2);

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x1: 1
Digite o valor de y1: 2
Digite o valor de x2: 3
Digite o valor de y2: 4
A soma de (1,2) com (3,4) eh (4,6)
-------------------------------------------------------------------------------
*/