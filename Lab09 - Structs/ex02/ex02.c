#include <stdio.h>

struct data{
    int dia;
    char mes[12];
    int ano;
};

int main(){
    printf("<< Data >>\n");
    struct data data[4];
    for(int i = 1; i <=3; i++){
        printf("\nDigite o dia: ");
        scanf("%d", &data[i].dia);
        printf("Digite o mes: ");
        scanf("%s", &data[i].mes);
        printf("Digite o ano: ");
        scanf("%d", &data[i].ano);
    }
    printf("\nDatas cadastradas:");
    for(int p = 1; p <= 3; p++){
        printf("\nDia %d de %s de %d\n",data[p].dia,data[p].mes,data[p].ano);
    }

    return 0;
}

/*
1) Crie uma estrutura chamada data, que armazena o dia, mês e o ano (ilustração abaixo).  
Cadastre 3 datas, mostre as datas e o maior ano cadastrado. 

Data***
+------------+------------+---------------+
| Dia        | Mês        |   Ano         |    
+------------+------------+---------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o dia: 2
Digite o mes: Janeiro
Digite o ano: 2015

Digite o dia: 15
Digite o mes: Maio
Digite o ano: 2018

Digite o dia: 21
Digite o mes: Dezembro
Digite o ano: 2020


Datas cadastradas: 
Dia 2 de Janeiro de 2015
Dia 15 de Maio de 2018
Dia 21 de Dezembro de 2020

2020 foi o maior ano cadastrado.
-------------------------------------------------------------------------------
*/