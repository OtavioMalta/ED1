#include <stdio.h>
int main(){
    int p;
    printf("<< Numeros primos >>\n");
    printf("Entre com o valor: ");
    scanf("%d",&p);
    if(p%2!=0 || p%3!=0 || p%5!=0 || p%7!=0 || p==2 ||p==3 ||p==5 ||p==7){
        printf("O numero %d eh primo!",p);
    }else{
        printf("O numero %d nao eh primo!",p);

    }
}