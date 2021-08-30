#include <stdio.h>
#include "conta.h"

int main(){
    int r = 1, num;
    float saldo,saldo_ant;
    char titular[30];
    conta *c;

    printf("\n\nInforme o numero da conta: ");
    scanf("%d", &num);
    printf("Informe o nome do titular da conta: ");
    scanf("%s", titular);
    printf("Informe o saldo da conta: ");
    scanf("%f", &saldo_ant);

    c = cria_conta(titular, num, saldo_ant);

    alterarSaldo(c, 10);

    get_conta_inf(c, titular, &num, &saldo);

    imprime_conta(c);

    printf("\nO saldo anterior era: %.2f\nO saldo atual eh: %.2f", saldo_ant, saldo);

    destroi_conta(c);
}