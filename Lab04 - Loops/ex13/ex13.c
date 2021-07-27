#include <stdio.h>
int main(){
    int n,i,j,k=0,p;
    printf("<< Multiplos >>\n");
    printf("Entre com o valor de n: ");
    scanf("%d",&n);    
    printf("Entre com o valor de i: ");
    scanf("%d",&i);
    printf("Entre com o valor de j: ");
    scanf("%d",&j);
    printf("Os multiplos de I ou J sao: ");
    while(p<=n){
        if(k%i==0 || k%j==0){
            printf("%d,",k);
            p++;
            k++;
        }else{
            k++;
        }
    }
}