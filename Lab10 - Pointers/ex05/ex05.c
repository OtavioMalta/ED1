#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int  v1 = 1;
    double v2 = 2;
    char c = 'a';

    int *p_v1;
    double *p_v2;
    char *p_c;

    p_v1 = &v1;
    p_v2 = &v2;
    p_c = &c;


    printf("\nEndereco de v1 %u", p_v1);
    printf("\nEndereco de v2 %u", p_v2);
    printf("\nEndereco de c %u", p_c);

    printf("\nEndereco+1 de v1 %u", p_v1+1);
    printf("\nEndereco+1 de v2 %u", p_v2+1);
    printf("\nEndereco+1 de c %u", p_c+1);

    printf("\nEndereco-1 de v1 %u", p_v1-1);
    printf("\nEndereco-1 de v2 %u", p_v2-1);
    printf("\nEndereco-1 de c %u", p_c-1);

    return 0;
}

/* 5)	Os operadores + e – funcionam com ponteiros. Chamamos de aritmética de ponteiros. 
Considere o código abaixo. Complete o código e preencha a tabela abaixo com os enderecos de cada printf.

*** modificar o especificador de formato no printf caso seja necessário

PS: não entendi pq alguns enderecos se repetem
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
| Nome variável               |                   |                   |                 |                   |                   |
| / Enderecos                 | Endereco var-2    | Endereco var-1    | Endereco var    | Endereco var+1    | Endereco var+2    |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |     6749692       |     6749696*      |     6749700     |     6749704**     |      6749708      |
| p_v1                        |                   |                   |                 |                   |                   |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |     6749672       |     6749680       |     6749688     |     6749696*      |      6749704**    |
| p_v2                        |                   |                   |                 |                   |                   |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
|                             |     6749685       |     6749686       |     6749687     |     6749688       |      6749689      |
| p_c                         |                   |                   |                 |                   |                   |
+-----------------------------+-------------------+-------------------+-----------------+-------------------+-------------------+
*/