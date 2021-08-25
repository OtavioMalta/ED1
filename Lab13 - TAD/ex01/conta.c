#include <stdio.h>
#include "conta.h"

int main(){
    int r = 1;
    float alt;
    conta c[4];

    for(int i = 0; i < 4; i++){
        printf("\n\nInforme o numero da conta: ");
        scanf("%d", &c[i].num);

        printf("Informe o nome do titular da conta: ");
        scanf("%s", c[i].titular);

        printf("Informe o saldo da conta: ");
        scanf("%f", &c[i].saldo);
    }

    while(r != 0){
        int n = 0;
        printf("\nQual o numero da conta deseja alterar o saldo?");
        scanf("%d", &n);
        for(int i = 0; i < 4; i++){
            if(n == c[i].saldo){
                printf("\nDigite o valor a ser acrescentado/decrementado: ");
                scanf("%f", &alt);
                if(alterarSaldo(&c[i], alt)==1){
                    printf("\nAlteracao realizada com Sucesso!\n");
                    printf("Numero da conta: %d\n", c[i].num);
                    printf("Saldo: %.2f\n", c[i].saldo);
                }else if(alterarSaldo(c, alt)==0){
                    printf("\n[ERRO] Saldo Insuficiente\n");
                }else{
                    printf("\n[ERRO DESCONHECIDO]\n");
                }
            }   
        }
        printf("\n\nDeseja efetuar uma nova operacao?[0 - Nao // 1 - Sim] ");
        scanf("%d", &r);
    }
}