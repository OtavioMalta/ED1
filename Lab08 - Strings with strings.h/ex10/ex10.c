#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str[20], rts[20];
    printf("<< Palindromo >>\n");
    printf("Digite a string: ");
    gets(str);
    int c = strlen(str) - 1;
    for(int i = 0; i <= strlen(str) ; i++){
        rts[c] = str[i];
        c--;
    }
    rts[c] = '\0';
    if(strcasecmp(rts,str)==0){
        printf("\nSao iguais!");
    }else{
        printf("\nSao diferentes!");
    }
}

/*

*/