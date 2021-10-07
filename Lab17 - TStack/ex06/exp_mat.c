#include <stdio.h>
#include <string.h>

int main()
{
    char equacao[101];
    float valores[26];
    float num;
    char c; 

    printf("Digite a expressao (maximo 100 caracteres):");
    fgets(equacao,100,stdin);
    equacao[strcspn(equacao, "\n")] = '\0'; 
    

    printf("\nExpressao digitada:\n%s",equacao);

    for (int i = 0; i< strlen(equacao); i++)
    {
        c = equacao[i];

        if (c == '+' || c == '-' || c == '*' || c == '/'){
            printf("\noperador: %c", c);
        } else if (c>=65 && c <= 90){ // testa se a letra é maior que A e menor que Z
            printf("\noperando: %c (%d)", c,c);
            printf("\nDigite o valor para %c = ",c);
            scanf("%f",&valores[c-65]); // letra A é mapeada na posição zero do vetor
        }

    }


    return 0;
}