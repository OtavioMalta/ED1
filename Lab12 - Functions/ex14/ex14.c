//Nao consegui ler o ponto neste fortmato (x,y)
#include <stdio.h>
#include <string.h>

struct ponto{
    int x,y;
};

void multPonto(struct ponto *p, int c){
    p->x *= c;
    p->y *= c;
}

int main(){
    struct ponto pto;
    struct ponto *p;
    p = &pto;
    int c;
    printf("Digite o ponto: \n");
    printf("X: ");
    scanf("%d", &pto.x); 
    printf("Y: ");
    scanf("%d", &pto.y);
    
    printf("Digite a constante: ");
    scanf("%d", &c);
    
    printf("Resultado: (%d, %d) * %d = ", pto.x,pto.y,c);
    multPonto(p,c);
    printf("(%d,%d)", p->x,p->y);
    return 0;   
}

/*
=> Faça um procedimento que multiplique o valor de um ponto 
por uma constante e altere o valor do ponto. Deve ser usada 
passagem por referência e retorno void.


-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o ponto: 1,2
Digite a constante: 5
Resultado: (1,2) * 5 = (5,10)
-------------------------------------------------------------------------------
*/