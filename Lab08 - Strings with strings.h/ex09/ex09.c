#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[20];
    printf("<< Invertendo >>\n");
    printf("Digite a string: ");
    gets(str);
    printf("Saida invertida: ");
    for(int i = strlen(str); i >=0; i--){
        printf("%c",str[i]);
    }
    return 0;
}

/*

*/