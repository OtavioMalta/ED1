#include <stdio.h>
int main(){
    int n;
    double nep = 1.0;
    printf("<<Numero neperiano>>\n");
    printf("Digite um numero: ");
    scanf("%d",&n);

    unsigned long long int fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
        nep+=1.0/fat;

    }

    printf("\nNeperiano = %.15lf",nep);
}