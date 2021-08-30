#include "conta.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct conta{
     char titular[30];
     float saldo;
     int num;
 };

conta* cria_conta(char *titular, int num, float saldo){
    conta *c;
    c = malloc(sizeof(conta));

    strcpy(c->titular, titular);
    c->num = num;
    c->saldo = saldo;

    return c;
}

int alterarSaldo(conta *c, float alt){
    float temp;
    if (alt < 0 && c->saldo < abs(alt)){
        //imprime_erro(-1);
        return 0;
    }else{
        c->saldo += alt;
        return 1;
    }
}

int get_conta_inf(conta *c, char *titular, int *num,float *saldo){
    if(c == NULL){
        return 1;
    }else{
        strcpy(titular, c->titular);
        *num = c->num;
        *saldo = c->saldo;
        return 0;
    }
    
}

void imprime_conta(conta *c){
    printf("\nTitular: %s\nSaldo: %.2f\nNumero: %d", c->titular,c->saldo,c->num);
}

int destroi_conta(conta *c){
    if(c == NULL){
        return 1;
    }else{
        free(c);
        return 0;
    }
    
}