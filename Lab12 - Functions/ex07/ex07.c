#include <stdio.h>

int Troque(int *a, int *b){
    int i = *a;
    *a = *b;
    *b = i;
}

int main(){
    int a,b;
    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);

    Troque(&a,&b);
    printf("\nO numero A eh: %d\n", a);
    
    printf("O numero B eh: %d", b);
    return 0;
}

/*
=> Faça um procedimento “Troque”, que recebe duas variáveis reais A e B
e troca o valor delas (i.e., A recebe o valor de B e B recebe o valor de A).
Mostre no programa principal o resultado da troca. 


No programa principal, solicite ao usuário o número A e o número B.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o número A: 2
Digite o número B: 5
O número A eh: 5
O número B eh: 2
-------------------------------------------------------------------------------
*/