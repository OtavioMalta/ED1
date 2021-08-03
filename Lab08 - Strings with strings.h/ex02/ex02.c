#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[50];
    printf("<<Vetor de char>>\n");
    printf("Digite um nome: ");
    gets(nome);
    for(int i = 0; i <strlen(nome); i++){
        nome[i] = toupper(nome[i]);
    }
    printf("%s", nome);
    return 0;
}

/*

*/