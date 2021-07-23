/*Faça um algoritmo que realiza a conversão entre de graus Celsius para Fahrenheit e vice-versa. O usuário deve digitar o valor da temperatura e a unidade de medida usada. O programa se encarrega de converter de uma unidade para a outra. Se a unidade digitada não for válida, mostrar uma mensagem de erro.

<< Conversor de Temperatura >>
Digite a temperatura: 86
Digite a unidade: f
86 graus Fahrenheitequivale a 30 graus Celsius */

#include <stdio.h>

int main(){
    float temp;
    char unid;
    printf("<< Conversor de Temperatura >>\n");
    printf("Digite a temperatura: ");
    scanf("%f",&temp);
    printf("Digite a unidade: ");
    scanf(" %c",&unid);
    if(unid=='f'){
        printf("%.0f graus Fahrenheit equivale a %.0f graus Celsius\n",temp, (temp-32)/1.8);
    }else{
        printf("%.0f graus Celsius equivale a %.0f Fahrenheit\n",temp,(temp*1.8)+32);
    }
}