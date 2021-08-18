#include <stdio.h>

int QuadradoPerfeito(int n){
    int soma = 0, x = 0;
    
    for(int i = 1;soma<n;i+=2){
        soma+=i;
        if(soma==n){
            x = 1;
        }
    }
    return x;
}

int main(){
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    if(QuadradoPerfeito(n)){
        printf("O numero %d eh um quadrado perfeito", n);
    }else{
        printf("O numero %d nao eh um quadrado perfeito", n);
    }
    return 0;
}

/*
=> Faça uma função para verificar se um número 
é um quadrado perfeito (retorne Verdadeiro caso seja).   

Ex: QuadradoPerfeito(4) retorna verdadeiro; 
    QuadradoPerfeito(10) retorna falso; 

obs: Pode-se retornar os valores 0 (para verdadeiro) e 1 (para falso).

No programa principal, solicite ao usuário o valor de n.

-------------------------------------------------------------------------------
Exemplo de Saída 1:

Digite o valor de n: 4
O numero 4 eh um quadrado perfeito
-------------------------------------------------------------------------------
-------------------------------------------------------------------------------
Exemplo de Saída 2:

Digite o valor de n: 10
O numero 10 não eh um quadrado perfeito
-------------------------------------------------------------------------------
*/