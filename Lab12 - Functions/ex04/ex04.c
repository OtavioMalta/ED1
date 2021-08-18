#include <stdio.h>

long long int potencia(int x, int n){
    long long int res = 1;
    for(int i = 1; i <= n; i++){
        res*=x;
    }
    return res;
}

int main(){
    int x, n;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    if(n<0){
        printf("[ERRO] O valor de (n) nao pode ser negativo!");
    }
    long long int res = potencia(x,n);
    printf("\nO valor de %d elevado a %d eh %lld\n", x,n,res);
    return 0;
}

/*
=> Faça uma função para calcular xn. Não utilizar o operador pow (nem ^ - que não existe em C).
No programa principal permita ao usuário informar o valor de x e de n (inteiro). 
Lembre que n pode assumir valor negativo.

Ex: Elevado(2,4) tem como saída 16; 
    

No programa principal, solicite ao usuário o valor de x e o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de x: 2
Digite o valor de n: 4
O valor de 2 elevado a 4 eh 16
-------------------------------------------------------------------------------
*/