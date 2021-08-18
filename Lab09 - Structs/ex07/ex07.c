//Nao consegui utilizar fgets para aceitar espaços em uma string

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
      printf("\nInforme os dados do %d elereodomestico: \n",i+1);
      printf("Nome: ");
      scanf("%s",&eletro[i].nome);
      printf("Potencia: ");
      scanf("%d", &eletro[i].pot);
      printf("Tempo ativo por dia: ");
      scanf("%d", &eletro[i].tempo);
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
    printf("\nEndereco de memoria\n");

    for(int o = 0; o < 5; o++){
        printf("\nEndereco do %d eletrodomestico\n", o + 1);
        printf("Endereco Nome: ");
        printf("%d\n",&eletro[o].nome);
        printf("Endereco Potencia: ");
        printf("%d\n",&eletro[o].pot);
        printf("Endereco Tempo: ");
        printf("%d\n",&eletro[o].tempo);
    }
    

    
    return 0;
}

/*
7.Desenhe, utilizando uma planilha eletrônica, o mapa de memória real para as variáveis
 da estrutura do exercício 6. Para isso, faça um nova cópia do projeto do exercício 6 e 
 modifique-o inserindo no final do programa um printf para o endereço de cada variável. 
 Na resposta a esse exercício coloque o código e a planilha (insira ela no documento em 
 que é apresentada a resposta da prática – não enviar arquivo separado!)

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

Enderecos de memoria: 

Enderecos 1º eletrodomestico
Endereco Nome: 0x7ffd81835ef0
Endereco Potencia: 0x7ffd81835f00
Endereco Tempo ativo: 0x7ffd81835f04

Enderecos 2º eletrodomestico
Endereco Nome: 0x7ffd81835f0c
Endereco Potencia: 0x7ffd81835f1c
Endereco Tempo ativo: 0x7ffd81835f20

Enderecos 3º eletrodomestico
Endereco Nome: 0x7ffd81835f28
Endereco Potencia: 0x7ffd81835f38
Endereco Tempo ativo: 0x7ffd81835f3c

Enderecos 4º eletrodomestico
Endereco Nome: 0x7ffd81835f44
Endereco Potencia: 0x7ffd81835f54
Endereco Tempo ativo: 0x7ffd81835f58

Enderecos 5º eletrodomestico
Endereco Nome: 0x7ffd81835f60
Endereco Potencia: 0x7ffd81835f70
Endereco Tempo ativo: 0x7ffd81835f74
-------------------------------------------------------------------------------


Mapa de memória (altere os endereços)
+----------+----------------+---------------+------+--+
|          |     Blocos     |               |      |  |
| Endereço |       (1 byte) | Nome variável | Tipo |  |
+----------+----------------+---------------+------+--+
| 0 / NULL |   indefinido   |      ----     | ---- |  |
+----------+----------------+---------------+------+--+
| 6749552  |        G       |     nome      |char[0]|  | 
+----------+----------------+---------------+------+--+
|     2    |        e       |               |char[1]|  |
+----------+----------------+---------------+------+--+
|     3    |        l       |               |char[2]|  |
+----------+----------------+---------------+------+--+
|     4    |        a       |               |char[3]|  |
+----------+----------------+---------------+------+--+
|     5    |        d       |               |char[4]|  |
+----------+----------------+---------------+------+--+
|     6    |        e       |               |char[5]|  |
+----------+----------------+---------------+------+--+
|     7    |        i       |               |char[6]|  |
+----------+----------------+---------------+------+--+
|     8    |        r       |               |char[7]|  |
+----------+----------------+---------------+------+--+
|     9    |        a       |               |char[8]|  |
+----------+----------------+---------------+------+--+
|    10    |       /0       |               |char[9]|  |
+----------+----------------+---------------+------+--+
|    11    |        lx      |               |      |  |
+----------+----------------+---------------+------+--+
|    12    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    13    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    14    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    15    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    16    |                |               |      |  |
+----------+----------------+---------------+------+--+
| 6749568  |      800       |     pot       |int   |  |
+----------+----------------+---------------+------+--+
|    18    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    19    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    20    |                |               |      |  |
+----------+----------------+---------------+------+--+
| 6749572  |      24        |     tempo     |int   |  |
+----------+----------------+---------------+------+--+
|    22    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    23    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    24    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    25    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    26    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    27    |                |               |      |  |
+----------+----------------+---------------+------+--+
|    28    |                |               |      |  |
+----------+----------------+---------------+------+--+
| 6749580  |       A        |      nome     |char[0]|  |
+----------+----------------+---------------+------+--+
|    30    |       r        |               |char[1]|  |
+----------+----------------+---------------+------+--+
|    31    |       c        |               |char[2]|  |
+----------+----------------+---------------+------+--+
|    32    |       o        |               |char[3]|  |
+----------+----------------+---------------+------+--+
|    33    |       n        |               |char[4]|  |
+----------+----------------+---------------+------+--+
|    34    |       d        |               |char[5]|  |
+----------+----------------+---------------+------+--+
|    35    |       i        |               |char[6]|  |
+----------+----------------+---------------+------+--+
|    36    |       c        |               |char[7]|  |
+----------+----------------+---------------+------+--+
|    37    |       i        |               |char[8]|  |
+----------+----------------+---------------+------+--+
|    38    |       o        |               |char[9]|  |
+----------+----------------+---------------+------+--+
|    39    |       n        |               |char[10]| |
+----------+----------------+---------------+------+--+
|    40    |       a        |               |char[11]| |
+----------+----------------+---------------+------+--+
|    41    |       d        |              |char[12]|  |
+----------+----------------+---------------+------+--+
|    42    |       o        |               |char[13]| |
+----------+----------------+---------------+------+--+
|    43    |       /0        |              |      |  |
+----------+----------------+---------------+------+--+
|    44    |       lx        |              |      |  |
+----------+----------------+---------------+------+--+
| 6749600  |      1500      |      pot      |  int |  |
+----------+----------------+---------------+------+--+
|    46    |                |               |      |  |
+----------+----------------+---------------+------+--+
| coloque   "lx" para lixo                  |      |  |
+---------------------------+---------------+------+--+
| Programa 32   bits        |               |      |  |
+---------------------------+---------------+------+--+
*/