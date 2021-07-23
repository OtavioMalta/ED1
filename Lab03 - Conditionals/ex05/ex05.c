/*Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação*/
#include <stdio.h>
int main(){
    float peso, altura, imc;
    printf("<<Calculo de IMC>>");
    printf("Digite o peso em Kg: ");
    scanf("%f",&peso);
    printf("Digite a altura em M: ");
    scanf("%f", &altura);
    imc = peso/(altura*altura);
    if(imc<18.5){
        printf("%.1f - Magreza", imc);
    }else if(18.5<imc && imc<24.9){
        printf("%.1f - Saudavel", imc);
    }else if(25.0<imc && imc<29.9){
        printf("%.1f - Sobrepeso", imc);
    }else if(30.0<imc && imc<34.9){
        printf("%.1f - Obesidade Grau I", imc);
    }else if(35.0<imc && imc<39.9){
        printf("%.1f - Obesidade Grau II (severa)",imc);
    }else{
        printf("%.1f - Obesidade Grau III (morbida)",imc);
    }
}