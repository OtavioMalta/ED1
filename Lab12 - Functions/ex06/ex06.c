#include <stdio.h>

unsigned int fatorial(int f){
    unsigned int fat = 1;
    for(int i = f; i > 0; i--){
        fat *= i;
    }
    return fat;
}

double neperiano(int n){ 
    double fat, nep=1, x=1;
    for(n; n > 0; n--){
        fat = fatorial(x);
        nep += 1/fat;
        x++;
    }
    return nep;
}


int main(){
    int n;
    double nep;
    printf("Digite o valor de n para aproximar o numero neperiano: ");
    scanf("%d", &n);

    nep = neperiano(n);

    printf("O valor do numero neperiano eh: %.14lf", nep);
    return 0;
}

/*
=> Faça uma função para calcular o número neperiano usando uma série (ver na wikipedia). 
A função deve ter como parâmetro o número de termos que serão somados (note que, 
 quanto maior o número, a resposta estará mais próxima do valor e). 
Observe que é preciso calcular o fatorial de vários números – para isso, utilize
a função criada anteriormente. Utilize também o procedimento criado no exercício 2.

Pesquise: https://pt.wikipedia.org/wiki/E_(constante_matemática)



Ex: Neperiano(0) tem como saída 1; 
    Neperiano(1) tem como saída 2;
    Neperiano(5) tem como saída 2.71666666666667;

No programa principal, solicite ao usuário o valor para aproximar
o número neperiano.

-------------------------------------------------------------------------------
Exemplo de Saída:

Digite o valor de n para aproximar o numero neperiano: 14
O valor do numero neperiano eh: 2.71828182845823
-------------------------------------------------------------------------------
*/