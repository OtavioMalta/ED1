#include <stdio.h>
int main(){
    int n,num=1;
    printf("Digite um numero: ");
    scanf("%d",&n);
    for(int i = 0; n>=num; i++){
        printf("\n");
        for(int p = 0; p <=i;p++){
            printf("%d ",num);
            num++;
        }
    }
}