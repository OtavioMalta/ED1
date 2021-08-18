#include <stdio.h>
#include <stdlib.h>
struct ponto{
    int x,y;
};

void alocarPonto(int n){
    struct ponto *p;
    p = (struct ponto *)calloc(n, sizeof(struct ponto));
}
int main(){
    int n;
    struct ponto *p;
    printf("Digite quantos pontos(x,y) você deseja: ");
    scanf("%d",&n);
    for(int i =0; i<n; i++){
        printf("(%d,%d) ",p[i].x,p[i].y);
    }
    free(p);
    return 0;
}

/*
=> Crie uma função para alocar dinamicamente um vetor de n 
pontos e inicialize esses pontos como (0,0).

No programa principal, solicite ao usuário quantos pontos deseja.
-------------------------------------------------------------------------------
Exemplo de Saída:

Digite quantos pontos(x,y) você deseja: 2
(0,0) , (0,0) 
-------------------------------------------------------------------------------
*/