#include <stdio.h>
int main(){
    int i;
    printf("<<Contagem regressiva>>\n");
    printf("Qual o numero inicial? ");
    scanf("%d",&i);
    for(i; i>=0; i--){
        printf("%d..",i);
    }
    printf("FIM!");
}