#include <stdio.h>
int main(){
    int p,i=0;
    printf("<< Contagem progressiva ate 0>>\n");
    printf("Qual eh o numero inicial?");
    scanf("%d",&p);
    while(i>=p){
        printf("%d..",p);
        p++;
    }
    printf("FIM!");
}
