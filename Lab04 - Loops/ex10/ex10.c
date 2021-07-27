#include <stdio.h>
int main(){
    int p,i=1,soma=0;
    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos numeros deseja somar?");
    scanf("%d",&p);
    while(p>=i){
        soma+=i;
        i++;
    }
    printf("A soma dos %d primeiros numeros naturais eh: %d",p,soma);
}