#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    printf("<< Compara nomes >>\n");
    char n1[20], n2[20];
    printf("<<Compara nomes>>\n");
    printf("Digite o nome 1: ");
    scanf("%s",&n1);
    printf("Digite o nome 2: ");
    scanf("%s",&n2);
    if(strcmp(n1,n2) == 0){
        printf("Sao Iguais!");
    }else{
        printf("Sao Diferentes!");

    };
        
    return 0;
}
