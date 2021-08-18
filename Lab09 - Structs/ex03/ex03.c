//Tentei de tudo pra colocar o fgets, mas por algum motivo alguns imputs são pulados mesmo usado o fflush

#include <stdio.h>
#include <string.h>

struct endereco{
    char rua[20];
    int num;
    char comp[20];
    char cid[20];
    char est[20];
    int cep;
};


int main(){
    printf("<< Endereco >>\n");
    struct endereco enderecos[4];
    for(int i = 1; i <=3; i++){
        printf("\nRua: ");
        scanf("%s",enderecos[i].rua);

        printf("Numero: ");
        scanf("%d",&enderecos[i].num);
        
        printf("Complemento: ");
        scanf("%s",enderecos[i].comp);
        
        printf("Cidade: ");
        scanf("%s",enderecos[i].cid);

        printf("Estado: ");
        scanf("%s",enderecos[i].est);

        printf("CEP: ");
        scanf("%d",&enderecos[i].cep);
        


    }
    printf("\nenderecos cadastrados: \n");
    for(int p = 1; p <= 3; p++){
        if(strcmp(enderecos[p].est,"MG")==0){
            printf("%s, %d %s %s - %s, %d.\n",enderecos[p].rua,enderecos[p].num,enderecos[p].comp,enderecos[p].cid,enderecos[p].est, enderecos[p].cep);
        }
    }

    return 0;
}

/*
1) Crie uma eutura chamada endereco, que armazena Rua, Número, Complemento,
Cidade, Estado e CEP (iluação abaixo).  
Cadae 3 endereços. Moe ao final, todos os dados dos endereços cadaados que são do estado “MG”

Endereco*
+------------+------------+---------------+
| Rua        | Número     |  Complemento  |    
+------------+------------+---------------+
| Cidade     | Estado     |     CEP       | 
+------------+------------+---------------+


-------------------------------------------------------------------------------
Exemplo de saída:
Rua: Joao
Numero: 32
Complemento: casa A
Cidade: Uberlannum
Estado: MG
CEP: 38400034


Rua: Almeida
Numero: 43
Complemento: Sem
Cidade: Araguari
Estado: MG
CEP: 38400045


Rua: Coronel Pedro
Numero: 25
Complemento: apto 40
Cidade: Caldas Novas
Estado: GO
CEP: 75780023


Enderecos cadaados que sao de "MG":
Joao, 32. casa A. Uberlannum-MG, 38400034.
Almeida, 43. Sem. Araguari-MG, 38400045.
-------------------------------------------------------------------------------
*/