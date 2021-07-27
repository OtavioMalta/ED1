#include <stdio.h>

int main(){
    int a,nota[a],soma=0;
    float media;
    printf("<< Media de n alunos. Maximo 100 alunos >>\n");
    printf("Entre com um numero de alunos: ");
    scanf("%d",&a);
    if(a>100){
        printf("[Erro!] O numero maximo de alunos permitido eh 100");
    }else{
        for(int i =1;i<=a;i++){
        printf("Digite a nota do aluno %d: ",i);
        scanf("%d",&nota[i]);
        soma+=nota[i];
        }
        media=(float)soma/(float)a;
        printf("Relatorio de Notas\n");
        for (int k = 1; k <= a; k++)
        {
            printf("Nota do aluno %d: %d\n",k,nota[k]);
        }
        printf("Media da turma: %.1f",media);
        return 0;}
}

/*
Faça um programa que calcula a média das notas dos alunos de uma turma. Note 
que uma turma pode ter no máximo 100 alunos (mostrar uma mensagem de erro 
caso o número escolhido seja maior que 100). Peça para o usuário entrar com 
o número de alunos e ao final mostre a nota de todos os alunos.

Exemplo de Saída
<< Media de n alunos. Maximo 100 alunos >>
Entre com o numero de alunos: 4
Digite a nota do aluno 1: 6
Digite a nota do aluno 2: 7
Digite a nota do aluno 3: 5
Digite a nota do aluno 4: 4

Relatorio de Notas
Nota do aluno 0: 6
Nota do aluno 1: 7
Nota do aluno 2: 5
Nota do aluno 3: 4
Media da turma:  5.5

------------------------------------
Exemplo de Saída 2
<< Media de n alunos. Maximo 100 alunos >>
Entre com o numero de alunos: 400
Erro! O numero maximo de alunos permitido eh 100.
*/
