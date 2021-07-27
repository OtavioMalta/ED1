#include <stdio.h>
#include <math.h>
int main(){
    int p,b,bin=0,dec=0;
    printf("<< Conversor binario-decimal >>\n");
    printf("Entre com o numero de bits: ");
    scanf("%d",&b);
    for (int i = 1; i <= b; i++)
    {
        printf("Digite o bit #%d:",i);
        scanf("%d",&p);
        bin += p*(pow(10,b-i));
        dec += p*(pow(2,b-i));
    }
    printf("O numero binario %d em decimal eh %d",bin,dec);
}