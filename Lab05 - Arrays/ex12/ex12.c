#include <stdio.h>

int main(){
    int cor[4],soma;
    float valor[4],maior=0.0;
    printf("<< Probabilidades >>\n");
    printf("Digite a quantidade de bolinhas\n");
    printf("Verde: ");
    scanf("%d",&cor[0]);
    printf("Azul: ");
    scanf("%d",&cor[1]);
    printf("Amarelo: ");
    scanf("%d",&cor[2]);
    printf("Vermelho: ");
    scanf("%d",&cor[3]);
    soma=cor[0]+cor[1]+cor[2]+cor[3];
    for(int i=0;i<4;i++){
        valor[i]=(float)cor[i]/(float)soma*100;
        if(valor[i]>=maior){
            maior=valor[i];
        }
    }

    printf("\nProbablidade\n");
    if(valor[0]==maior){
        printf("Verde: %.1f %% << Maior probabilidade\n", valor[0]);
    }else{
        printf("Verde: %.1f %%\n", valor[0]);
    }
    if(valor[1]==maior){
        printf("Azul: %.1f %% << Maior probabilidade\n", valor[1]);
    }else{
        printf("Azul: %.1f %%\n", valor[1]);
    }if(valor[2]==maior){
        printf("Amarelo: %.1f %% << Maior probabilidade\n", valor[2]);
    }else{
        printf("Amarelo: %.1f %%\n", valor[2]);
    }if(valor[3]==maior){
        printf("Vermelho: %.1f %% << Maior probabilidade\n", valor[3]);
    }else{
        printf("Vermelho: %.1f %% \n", valor[3]);
    }
    return 0;
}

/*
Uma piscina de bolinhas possui bolas azuis, verdes, amarelas e vermelhas. 
Faça um programa em que o usuário digita a quantidade de bolinhas de cada
cor existente em uma piscina e mostra a probabilidade de ocorrência de cada 
cor, indicando qual possui a maior probabilidade

Exemplo de saída:
<< Probabilidades >>

Digite a quantidade de bolinhas
Verde: 51
Azul: 60
Amarela: 70
Vermelha: 80

Probabilidades
Verde: 19.5%
Azul: 22.9%
Amarela: 26.8%
Vermelha: 30.6% << Maior probabilidade
*/