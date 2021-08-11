#include <stdio.h>

struct telefone{
    int ddd;
    int num;
};

int main(){
    printf("<< Telefone >>\n");
    struct telefone telefones[4];
    for(int i = 1; i <=3; i++){
        printf("Digite o DDD: ");
        scanf("%d", &telefones[i].ddd);
        printf("Digite o telefone: ");
        scanf("%d", &telefones[i].num);
    }

    for(int p = 1; p <= 3; p++){
        printf("%d %d\n",telefones[p].ddd,telefones[p].num);
    }

    return 0;
}

/*
1) Crie uma estrutura chamada telefone, que armazena o DDD e o telefone (ilustração abaixo).  
Cadastre 3 telefones e mostre na tela os telefones cadastrados. 

Telefone**
+------------+------------+
| DDD        | Telefone   |  
+------------+------------+

-------------------------------------------------------------------------------
Exemplo de saída:
Digite o DDD: 34
Digite o telefone: 991501111
Digite o DDD: 31
Digite o telefone: 991502222
Digite o DDD: 64
Digite o telefone: 991503333

Telefones cadastrados: 
34 991501111
31 991502222
64 991503333
-------------------------------------------------------------------------------
*/