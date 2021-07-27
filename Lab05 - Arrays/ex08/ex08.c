#include <stdio.h>
#include <math.h>
int main(){
    int num[5],soma=0;
    float media,dp,res;
    printf("<< Media e desvio-padrao >>\n");
    for(int i = 0; i < 5; i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&num[i]);
        soma+=num[i];
    }
    media = soma/5; 
    for(int k =0;k<5;k++){
        dp+=pow(num[k]-media,2);
    }
    res=sqrt(dp/4.0);
    printf("A media eh %.0f e o desvio-padrao eh %.2f",media,res);
    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
