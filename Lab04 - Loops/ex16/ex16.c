#include <stdio.h>
#include <math.h>
int main(){
    for(double i = 2; i <= 128; i*=2){
        printf("Com %.0lf bits eh possivel enderecar %.0lf posicoes de memoria\n",i,pow(2,i));
    }
}