#include <stdio.h>
#include <math.h>

int main() {
    float x,y;
    printf("<< Distancia >>\n");
    printf("Entre com a cordenada x: ");
    scanf("%f",&x);
    printf("Entre com a cordenada y: ");
    scanf("%f",&y);
    printf("A distacia entre os pontos (%.0f,%.0f) e (0,0) eh %.1f",x,y, sqrt((x*x) + (y*y)));
}

/*
=> Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0).  
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número

-------------------------------------------------------------------------------
Exemplo de saída:

<< Distancia >>
Entre com a coordenada x: 3
Entre com a coordenada y: 4
A distancia entre os pontos (3,4) e (0,0) eh 5.0
-------------------------------------------------------------------------------
*/