/*Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (1-MG 7%; 2-SP 12%; 3-RJ 15%; 4-MS 8%). Faça um programa em que o usuário entre com o valor e o código do estado destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o código do estado digitado não for válido, mostrar uma mensagem de erro

Exemplo de saida:
<<  Valor do Produto com imposto >> 
Digite o valor do produto R$: 100.00
Digite a unidade da federação: 1
Valor final com impostos R$: 107.00*/

#include <stdio.h>

int main(){
    float valor;
    int cod;
    printf("<<  Valor do Produto com imposto >>\n");
    printf("Digite o valor do produto R$: ");
    scanf("%f",&valor);
    printf("Digite a unidade da federacao: ");
    scanf("%d",&cod);
    printf("Valor final com imposto R$: ");
    if(cod==1){
        printf("%.2f", valor+valor*0.07);
    }else if(cod==2){
        printf("%.2f",valor+valor*0.12);
    }else if(cod==3){
        printf("%.2f",valor+valor*0.15);
    }else if(cod==4){
        printf("%.2f",valor+valor*0.08);
    }else{
        printf("[ERRO] Codigo de Federacao nao encontrado");
    }

    /* USANDO SWItCH
    switch (cod)
    {
    case 1:
        printf("%.2f",valor+valor*0.07);
        break;
    case 2:
        printf("%.2f",valor+valor*0.12);
        break;
    case 3:
        printf("%.2f",valor+valor*0.15);
        break;
    case 4:
        printf("%.2f",valor+valor*0.08);
        break;
    default:
        printf("[ERRO] Codigo de Federacao nao encontrado");
        break;
    }*/
}