#include <stdio.h>
int main(){
    int n;
    long long int nep, f, p=1;
    printf("<<Numero neperiano>>");
    printf("Digite um numero: ");
    scanf("%d",&n);
    for(int i = 0; i <=n; i++){
        f=i*p;
        p=f;
        nep+=f;
    }
    printf("%lld",nep);
}