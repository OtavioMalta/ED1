#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto{
    int x,y;
};

struct circulo{
    struct ponto centro;
    int raio;
};
// check:<<<erro: use valores reais>>>>

int main(){
    struct circulo c;
    struct ponto p;
    p.x = 3;
    p.y = 5;
    c.centro = p;
    c.raio = p.y - p.x;
    float area = 3.14*c.raio*c.raio;
    float dist = sqrt(c.centro.x*c.centro.x + c.centro.y*c.centro.y);

    printf("Circulo: \n");
    printf("Centro: (%d,%d)\n", c.centro.x,c.centro.y);
    printf("Raio: %d\n", c.raio);
    printf("Area: %.2f\n", area);
    printf("Distancia: %.1f", dist);
   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.
   
   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // e mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
   
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0


    return 0;
}