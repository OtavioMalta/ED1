#include <stdio.h>
int main(){
    char l='o',c;
    printf("<<Forca de uma letra so>>\n");
    for (int i = 4; i >= 0; i--)
    {
        printf("Qual a letra? ");
        scanf(" %c",&c);
        if(c==l){
            printf("ACERTOU!\n");
            break;
        }else if(i==0){
            printf("Acabaram suas chances. A letra correta eh '%c'",l);
        }else if(i==1){
            printf("Ultima chance!!!");
        }
        else{
            printf("Errado! Voce tem mais %d chances\n",i);
        }
    }
       
}