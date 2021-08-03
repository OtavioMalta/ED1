#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[20], cpf[15], rg[15], end[50], cid[20],est[20],cep[10];
    printf("<< Declaracao >>\n");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu CPF;");
    gets(cpf);
    printf("Digite seu RG;");
    gets(rg);
    printf("Digite seu endereco: ");
    gets(end);
    printf("Digite a cidade: ");
    gets(cid);
    printf("Digite o estado: ");
    gets(est);
    printf("Digite o CEP: ");
    gets(cep);

    printf("\n D E C L A R A C A O\n");
    printf("\nEu, %s, RG %s, CPF %s, residente a %s, %s - %s, CEP %s venho por meio desta que vou estudar para a prova. ",
        nome, rg, cpf, end, cid, est, cep
    );
    return 0;
}

/*

*/