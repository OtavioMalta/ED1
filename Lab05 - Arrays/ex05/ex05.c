#include <stdio.h>

int main(){
    int num[5],min,max;
    float soma=0;
    printf("<< Five Values >>\n");
    for(int i = 0; i < 5;i++){
        printf("Input #%d: ",i+1);
        scanf("%d",&num[i]);
    }
    min=num[0];
    max=num[0];
    printf("The numbers entered are: ");
    for(int p = 0; p < 5; p++){
        printf("%d ",num[p]);
        soma+=num[p];
        if(num[p]<=min){
            min=num[p];
        }
        if(num[p]>=max){
        max=num[p];
        }   
    }
    printf("\nMax. Value: %d\n",max);
    printf("Min. Value: %d\n",min);
    printf("Mean: %.1f", soma/5.0);
    return 0;
}


/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/