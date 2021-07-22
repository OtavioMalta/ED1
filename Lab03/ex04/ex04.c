/*Faça um programa que tem como entrada as iniciais do nome de três alunos e suas respectivas notas. Ao final, o programa deve mostrar o nome e a nota do aluno que tirou a maior nota e o nome e a nota do aluno que tirou a menor nota (em caso de notas iguais mostrar somente um nome)

Exemplo de saida: 
<< Notas da Turma >>
Entre com o nome do aluno #1: M
Entre com a nota do aluno #1:  10.0
Entre com o nome do aluno #2: J
Entre com a nota do aluno #2: 6.5
Entre com o nome do aluno #3: R
Entre com a nota do aluno #3: 7.0
M. tem a maior nota (10.0) e J. a menor (6.5)*/

#include <stdio.h>

int main(){
    char a1,a2,a3, mai, men;
    float n1,n2,n3, maior, menor;
    printf("<< Notas da Turma >>\n");
    printf("Entre com o nome do aluno #1: ");
    scanf(" %c",&a1);
    printf("Entre com a nota do aluno #1: ");
    scanf("%f",&n1);
    printf("Entre com o nome do aluno #2: ");
    scanf(" %c",&a2);
    printf("Entre com a nota do aluno #2: ");
    scanf("%f",&n2);
    printf("Entre com o nome do aluno #3: ");
    scanf(" %c",&a3);
    printf("Entre com a nota do aluno #3: ");
    scanf("%f",&n3);
    if(n1>n2 && n1>n3){
        maior = n1; 
        mai = a1;
    }else if (n2>n3 && n2>n1){
        maior = n2;
        mai = a2;
    }else{
        maior = n3;
        mai = a3;
    }
    
    if(n1<n2 && n1<n3){
        menor = n1;
        men = a1;
    }else if(n2<n3 && n2<n1){
        menor = n2;
        men = a2;
    }else{
        menor = n3;
        men = a3;
    }
    printf("%c. tem a maior nota (%.1f) e %c. a menor (%.1f)", mai,maior,men,menor);
    
}