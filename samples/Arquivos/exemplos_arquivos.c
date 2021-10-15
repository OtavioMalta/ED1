#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno
{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

int main(){
/*
    {
        FILE *fp;
        fp = fopen("g:\\arq\\ed1.bin", "wb");
        if (fp == NULL)
        {
            printf("Erro!");
            exit(1);
        }
        fclose(fp);
        
    }
*/
/*
    {

        // criando um arquivo texto
        printf("\n\n========TESTE 2 ==========\n\n");

        // gravando a string, caracter por caracter
        FILE *arq;
        arq = fopen("g:\\arq\\ed1_ex2.txt", "w");
        if (arq == NULL)
        {
            printf("Erro");
            exit(1);
        }

        char string[100];
        printf("Digite o texto a ser salvo:");
        gets(string);

        int i = 0;
        printf("Escrevendo:");
        for (i = 0; i < strlen(string); i++)
        {
            fputc(string[i], arq);
            printf("%c", string[i]);
        }
        fclose(arq);
    }

    */
/*
    {
        // lendo um arquivo texto
        printf("\n\n========TESTE 3 ==========\n\n");

        char c;

        FILE *arq;
        arq = fopen("G:\\ARQ\\ed1_ex2.txt", "r");
        if (arq == NULL)
        {
            printf("Erro");
            exit(1);
        }
        int i;
        for (i = 0; i < 50; i++)
        {
            c = fgetc(arq);
            if (c == -1) printf("encontrado -1!!\n");
            if (c == EOF) printf("encontrado EOF!!\n");
            printf("%c", c);
        }
        fclose(arq);
    }
*/
/*
    {
        // criando um arquivo texto
        printf("\n\n========TESTE 3 EOF ==========\n\n");

        char c;

        FILE *arq;
        arq = fopen("g:\\arq\\ed1_ex2.txt", "r");
        if (arq == NULL)
        {
            printf("Erro");
            exit(1);
        }
        int i;
        while ((c = fgetc(arq)) != EOF)
        {
            printf("%c", c);
        }
        fclose(arq);
    }

*/
/*
    {

        // criando um arquivo texto
        printf("\n\n========TESTE 4 - FEOF ==========\n\n");

        FILE *arq;
        char c;
        arq = fopen("g:\\arq\\ed1_ex2.txt", "r");
        if (arq == NULL)
        {
            printf("Erro");
            exit(1);
        }
        int i;
        while (!feof(arq))
        {
            c = fgetc(arq);
            printf("%c", c);
        }
        fclose(arq);
    }
*/
/*
    {

        // criando um arquivo texto
        printf("\n\n========TESTE 5 - FEOF ==========\n\n");

        FILE *arq;
        char str[30] = "teste escrita string";
        arq = fopen("g:\\arq\\ed1_ex5.txt", "w");
        if (arq == NULL)
        {
            printf("Erro");
            exit(1);
        }

        int result;
        result = fputs(str, arq);

        if (result == EOF)
        {
            printf("Erro!");
            exit(1);
        }
        else
        {
            printf("Valor retornado: %d", result);
        }
        fclose(arq);
    }
*/

    {

        // criando um arquivo texto
        printf("\n\n========TESTE 6 - fgets ==========\n\n");

        FILE *arq;
        char str[30];

        arq = fopen("g:\\arq\\ed1_ex5.txt", "r");
        if (arq == NULL)
        {
            printf("Erro");
            exit(1);
        }

        char *result;
        result = fgets(str, 7, arq);

        if (str == NULL)
        {
            printf("\nNão serão!");
        }
        if (result == NULL)
        {
            printf("Erro!");
            exit(1);
        }
        else
        {
            printf("\n|%s|", str);
        }
        fclose(arq);
    }

    return 0;
}