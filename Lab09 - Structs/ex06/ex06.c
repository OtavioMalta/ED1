#include <string.h>
#include <stdio.h>
struct elet{
  char nome[15];
  int pot;
  int tempo;
  int total;
};

int main(){
    int dias,total = 0;
    struct elet eletro[5];
    printf("<< Eletrodomesticos >>\n");
    for(int i = 0; i<5; i++){
      printf("\nInforme os dados do %d elereodomestico: \n",i);
      printf("Nome: ");
      gets(eletro[i].nome);
      printf("Potencia: ");
      scanf("%d", &eletro[i].pot);
      printf("Tempo ativo por dia: ");
      scanf("%d", &eletro[i].tempo);
      fflush(stdin);
      }
    
    printf("Informe um valor de tempo(em dia): ");
    scanf("%d",&dias);
    for(int p = 0; p <5; p++){
      eletro[p].total = eletro[p].pot * eletro[p].tempo * dias;
      total += eletro[p].total;
    }
    printf("Consumo total: %d KW\n",total);

    printf("Consumo Relativo: \n");
    
    for(int t = 0; t < 5; t++){
      printf("%s: %.1f %%\n", eletro[t].nome, eletro[t].total*100.0/total);
    }
    printf("-------------------------------------------------------------------------------");
    return 0;
}

/*
6.Faça um programa que controla o consumo de energia dos eletrodomésticos de uma casa.

    • Crie e leia as informações de 5 eletrodomésticos: o nome (máximo 15 letras), 
      potencia (real,  em kW) e tempo ativo por dia (real, em horas).

    • Leia um valor de tempo t (em dias), calcule e mostre o consumo total na casa e
      o consumo relativo de cada eletrodoméstico  (consumo/consumo total) nesse período
      de tempo. Apresente este ultimo dado em porcentagem.

-------------------------------------------------------------------------------
Exemplo de saída:
Informe os dados do 1º eletrodomestico: 
Nome: Geladeira
Potencia: 800
Tempo ativo por dia: 24

Informe os dados do 2º eletrodomestico: 
Nome: Ar Condicionado
Potencia: 1500
Tempo ativo por dia: 8

Informe os dados do 3º eletrodomestico: 
Nome: Chuveiro
Potencia: 4500
Tempo ativo por dia: 1

Informe os dados do 4º eletrodomestico: 
Nome: Radio
Potencia: 100
Tempo ativo por dia: 6

Informe os dados do 5º eletrodomestico: 
Nome: Computador
Potencia: 750
Tempo ativo por dia: 18

Informe um valor de tempo (em dia): 30
Consumo total: 1494000 KW
Consumo relativo: 
Geladeira 38.6%
Ar Condicionado 24.1%
Chuveiro 9.0%
Radio 1.2%
Computador 27.1%
-------------------------------------------------------------------------------
*/