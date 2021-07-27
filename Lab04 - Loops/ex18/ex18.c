#include <stdio.h>
int main(){
    char c;
    float v;
    int i=1;
    while (c!='q'){
    printf("<< Conversor >>\n");
    printf("Digite uma opcao: \n");
    printf("1 - para converter de km/h para m/s\n");
    printf("2 - para converter de m/s para hm/h\n");
    printf("q - para sair\n");
    scanf(" %c",&c);
    if(c=='1'){
        printf("Digite a velocidade (Km/h): ");
        scanf("%f",&v);
        printf("A velocidade em m/s eh %f\n",v/3.6);
    }
    else if(c=='2'){
        printf("Digite a velocidade (m/s): ");
        scanf("%f",&v);
        printf("A velocidade em Km/h eh %f\n",v*3.6);
    }
}}