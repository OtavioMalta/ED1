/*Ler o comprimento dos três lados de um triângulo (A,B,C) e determinar o tipo de triângulo, com base nos seguintes casos:
(i)Se algum dos lados for maior que a soma dos outros dois, nenhum triângulo é formado
(ii)Se A2 = B2 + C2 é formando um triângulo retângulo
(iii)Se A2 > B2 + C2 é formando um triangulo obtusângulo
(iv)Se A2 < B2 + C2 é formando um triangulo acutângulo
Caso um número negativo seja digitado, mostrar uma mensagem de erro*/

#include <stdio.h>
int main(){
    int l1,l2,l3,hip,cat1,cat2;
    printf("Digite o 1o lado do triangulo: ");
    scanf("%d",&l1);
    printf("Digite o 2o lado do triangulo: ");
    scanf("%d",&l2);
    printf("Digite o 3o lado do triangulo: ");
    scanf("%d",&l3);
    
    if(l1>l2 && l1>l3){
        hip = l1;cat1=l2;cat2=l3;
    }else if(l2>l1 && l2>l3){
        hip = l2;cat1=l1;cat2=l3;
    }else{hip = l3;cat1=l1;cat2=l2;}
    
    if(l1<0||l2<0||l3<0){
        printf("[ERRO] O lado nao pode ser negativo!");
    }else if(hip>cat1+cat2){
        printf("Nenhum triangulo eh formado!");
    }else if(hip*hip==cat1*cat1+cat2*cat2){
        printf("Triangulo Retangulo!");
    }else if(hip*hip>cat1*cat1+cat2*cat2){
        printf("Triangulo Obstusangulo!");
    }else if(hip*hip<cat1*cat1+cat2*cat2){
        printf("Triangulo Acutangulo!");
    }
}