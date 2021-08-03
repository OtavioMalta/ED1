#include <stdio.h>
int main(){
    char n1[20], n2[20];
    printf("<<Compara nomes>>\n");
    printf("Digite o nome 1: ");
    scanf("%s",&n1);
    printf("Digite o nome 2: ");
    scanf("%s",&n2);
    for(int i = 0;i<=20;i++){
        if(n1[i]!=n2[i] ){
            printf("Sao diferentes!");
            break;
        }else if(n1[i]=='\0'){
            printf("Sao iguais!");
            break;
        }
    }
}