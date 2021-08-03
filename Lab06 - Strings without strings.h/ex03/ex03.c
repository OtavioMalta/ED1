#include <stdio.h>
int main(){
    char nome[50], l;
    int num;
    printf("<<Vetor de char>>\n");
    printf("Digite um nome:");
    l=getchar();
    while(l!='\n'){
        nome[num] = l;
        num++;
        l = getchar();
    }

    printf("O nome digitado eh:");
    for (int i = 1; i <= num; i++){
        if(nome[i]<97){
            printf("%c", nome[i]);
        }else{
            printf("%c", nome[i]-32);

        }
    }
}