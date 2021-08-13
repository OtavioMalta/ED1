#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    char nome[] = "Jose Augusto";
    char *p;
    p = &nome[0];

    for(int i = 0; i <13; i++){
        printf("%c", *(p+i));
    }
    return 0;
}