#include <stdio.h>
#include <string.h>
#include "TStack.h"
int main()
{
    char str[30];
    strcpy(str,"({}]");
    int temp = bemFormada(str);
    printf("Bem formada: %d", temp);
    return 0;
}