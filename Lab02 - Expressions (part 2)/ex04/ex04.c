#include <stdio.h>

int main() {
    printf("<< Calculo da Media >>\n");
    float media, n1, n2, n3, p1,p2,p3;
    char inicial;
    printf("Digite o nome do aluno: ");
    scanf("%c",&inicial);
    printf("Digite a nota da prova 1: ");
    scanf("%f",&n1);
    printf("Digite a nota da prova 2: ");
    scanf("%f",&n2);
    printf("Digite a nota da prova 3: ");
    scanf("%f",&n3);
    printf("digite o peso da prova 1: ");
    scanf("%f",&p1);
    printf("digite o peso da prova 2: ");
    scanf("%f",&p2);
    printf("digite o peso da prova 3: ");
    scanf("%f",&p3);
    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    printf("A nota media do aluno %c eh %.2f", inicial, media);
}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/