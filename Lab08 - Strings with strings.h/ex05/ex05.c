#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("<< Vetor de char >>\n");
    char nome[40],n[40],s[40];
    int nc = 0, sc = 0, onome = 1;
    printf("<<Nomes>>\n");
    printf("Digite o primeiro nome e ultimo nome: : ");
    gets(nome);
    for(int i = 0;i<=strlen(nome);i++){
        if (nome[i]!=' ' && onome == 1){
            n[nc]=nome[i];
            nc++;
        }else if (nome[i]!=' ' && onome == 0){
            s[sc]=nome[i];
            sc++;
        }else if(nome[i]==' '){
            n[nc+1]='\0';
            onome=0;
        }else if(nome[i]=='\0'){
            break;
        }
    }
    
    printf("Nome: %s\n", n);
    printf("Sobrenome: %s", s);
    return 0;
}

/*
Nao consegui usar strcpy nesse ex
*/