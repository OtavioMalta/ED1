/*Escreva um programa que, dado o valor da venda, imprima a comissão que deverá ser paga ao vendedor.*/
#include <stdio.h>
int main(){
    float valor;
    printf("<<Comissao>>\n");
    printf("Digite o valor da venda R$: ");
    scanf("%f",&valor);
    if(valor>=100000){

    }else if(valor>=80000){
        printf("Valor da comissao R$: %.2f",700+valor*0.16);
    }else if(valor>=60000){
        printf("Valor da comissao R$: %.2f",650+valor*0.14);
    }else if(valor>=40000){
        printf("Valor da comissao R$: %.2f",550+valor*0.14);
    }else if(valor>=20000){
        printf("Valor da comissao R$: %.2f",500+valor*0.14);
    }else{
        printf("Valor da comissao R$: %.2f",400+valor*0.14);
    }
}