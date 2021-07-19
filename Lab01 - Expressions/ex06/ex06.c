#include <stdio.h>

int main() {
    int premio;
    printf("<< Loteria >>\n");
    printf("Valor total do premio: ");
    scanf("%d",&premio);
    printf("Primeiro vencedor: %d\n",premio*46/100);
    printf("Segundo vencedor: %d\n", premio*32/100);
    printf("Terceiro vencedor: %d\n",premio*22/100);
}

/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/