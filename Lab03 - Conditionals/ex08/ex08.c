/*Determinar as raízes, reais ou complexas, de uma equação de segundo grau*/
#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,Del,x1,x2,y1,y2;
	printf("Digite A: ");
	scanf("%f",&a);
    printf("Digite B: ");
	scanf("%f",&b);
    printf("Digite C: ");
	scanf("%f",&c);
	
	Del=pow(b,2)-4*a*c;
    if(Del<0)
    {
    	printf("\nRaizes complexas: \n");

    	x1= -(b)/(2*a);
		y1= sqrt(Del*-1)/(2*a);
    	x2= -(b)/(2*a);
		y2= sqrt(Del*-1)/(2*a);
    	printf("1a Raiz: %.2f + %.2f*j\n2a Raiz: %.2f - %.2f*j",x1,y1,x2,y2);
    }
    else if(Del>0)
    {
    	printf("\nDuas raizes reais \n\n");
    	x1=(-(b)+sqrt(Del))/(2*a);
    	x2=(-(b)-sqrt(Del))/(2*a);
    	printf("Primeira Raiz: %.2f\nSegunda Raiz: %.2f",x1,x2);
    }
    else
    {
    	printf("\nUma raiz real\n\n");
    	x1=-(b)/(2*a);
    	printf("Raiz: %.2f\n",x1);
    }
}
//OBS: Não sei se está certo!