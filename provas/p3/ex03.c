    /*
Utilizando uma ED de Pilha (STACK) que armazena caracteres, 
faça um programa que lê uma string do teclado e, 
**utilizando a pilha**, mostre a string na ordem reversa. 
Entregar somente o código do programa principal. 
Não há necessidade de mostrar o código da pilha

Se a pessoa digitar abcd, o programa vai devolver: dcba

*/

#include <stdio.h>
#include "TStack.h"
#include <stdlib.h>
int main(){
    char c,d;
    int tam;
    TStack *stRes, *st;

    printf("Quantidade de caracteres: ");
    scanf("%d", &tam);

    stRes = stack_create(tam);
    st = stack_create(tam);
     
    for(int i = 0; i < tam; i++){
        printf("Caracter %d: ", i+1);
        fflush(stdin);
        scanf("%c", &c);
        stack_push(st, c);
    }
    for(int r = 0; r < tam; r++){
        stack_top(st, &d);
        stack_pop(st);
        stack_push(stRes, d);
    }
    stack_print(stRes);
}