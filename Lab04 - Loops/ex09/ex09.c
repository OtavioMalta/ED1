#include <stdio.h>
int main(){
    int p;
    printf("<< Contagem progressiva ate 0>>\n");
    printf("Qual eh o numero inicial?");
    scanf("%d",&p);
    for(int i = 0; i>=p;p++){
        printf("%d..",p);
    }
    printf("FIM!");
}