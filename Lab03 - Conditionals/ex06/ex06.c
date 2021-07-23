/*Verificar se um número inteiro é um quadrado perfeito, exibindo, nos casos afirmativos, sua raiz quadrada */

/*Tentei não usar a lib Math.h*/
#include <stdio.h>
#include <math.h>
int main()
{

    int num,soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int i = 1;soma<num;i+=2){
        soma+=i;
        if(soma==num){
            printf("Eh um Quadrado Perfeito!");
        }
    }
}