#include <stdio.h>
int main(){
    int p,i=0;
    printf("<< Contagem progressiva ate 0>>\n");
    printf("Qual eh o numero inicial?");
    scanf("%d",&p);
    do{
        printf("%d..",p);
        p++;
    }
    while(i>=p);
    printf("FIM!");
}
//Do-While não é a melhor estrutura por que ao ser passado um numero maior que 0,
//o programa será executado uma vez antes de ser impedido. Ou seja, neste caso, 
//sempre haverá uma saída.