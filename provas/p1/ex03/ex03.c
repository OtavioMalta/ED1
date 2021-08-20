#include <stdio.h>
#include <stdlib.h>

// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/
int calcula(float comp, float vend){
    int ret;
    float res;
    res = (vend-comp)/vend*100;
    if(comp>=vend){
        return 1;
    }else if(res>0 && res<=20){
        return 2;
    }else if(res>20 && res<=40){
        return 3;
    }else if(res>40){
        return 4;
    }else if(res<0){
        return -1;
    }
}
int main(){
    float comp, vend;
    int r;
   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   printf("Digite o preco de compra:");
    scanf("%f", &comp);
   printf("Digite o preco de venda:");
    scanf("%f", &vend);
    r = calcula(comp, vend);
    if(r == -1){
        printf("[ERRO] Valor invalido!!!");
    }else if(r == 1){
        printf("Prejuizo!");
    }else if(r == 2){
        printf("Lucro Pequeno!");
    }else if(r == 3){
        printf("Lucro Bom!");
    }else if( r == 4 ){
        printf("Lucro Alto!");
    }
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%

    return 0;
}