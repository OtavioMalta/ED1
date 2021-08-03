#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[40];
    printf("<< Separa letras >>\n");
    printf("Digite o nome: ");
    gets(nome);
    for(int i = 0; i<strlen(nome);i++){
        if(nome[i]!='a' && nome[i]!='e' && nome[i]!='i' && nome[i]!='o' && nome[i]!='u' ){
            if(nome[i]!='A' && nome[i]!='E' && nome[i]!='I' && nome[i]!='O' && nome[i]!='U' ){
                printf("%c",nome[i]);
            }
        }
    }
    return 0;
}

/*

*/