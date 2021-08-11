    #include <stdio.h>
    #include <string.h>

    struct alunos {
        int mat;
        char nome[30];
        int n1;
        int n2;
        int n3;
        float med;
        int faltas;
    };

    int main(){
        printf("<< Alunos >>\n");
        float maiorN1 = 0.0, maiorM = 0.0, menorM = 100.0;
        int indN1, indMaior, indMenor;
        struct alunos aluno[4];
        for(int i = 1; i <=3; i++){
            printf("Entre com os dados do %d aluno: \n",i);
            printf("Matricula: ");
            scanf("%d", &aluno[i].mat);

            printf("Nome: ");
            scanf("%s", aluno[i].nome);

            printf("Nota 1: ");
            scanf("%d", &aluno[i].n1);

            printf("Nota 2: ");
            scanf("%d", &aluno[i].n2);

            printf("Nota 3: ");
            scanf("%d", &aluno[i].n3);

            printf("Faltas: ");
            scanf("%d", &aluno[i].faltas);

            aluno[i].med = (aluno[i].n1+aluno[i].n2+aluno[i].n3)/3.0;

            if(aluno[i].n1>maiorN1){
                maiorN1 = (float)aluno[i].n1;
                indN1 = i;
            }

            if(aluno[i].med>maiorM){
                maiorM = aluno[i].med;
                indMaior = i;
            }
            if(aluno[i].med<menorM){
                menorM = aluno[i].med;
                indMenor = i;
            }
        }
        printf("Aluno com maior nota na prova 1 foi %s com %.1f pontos.\n", aluno[indN1].nome, maiorN1 );
        printf("Aluno com maior media geral foi %s com %.1f pontos.\n", aluno[indMaior].nome, maiorM );
        printf("Aluno com menor media geral foi %s com %.1f pontos.\n", aluno[indMenor].nome, menorM );

        printf("Situacao dos alunos: \n");
        for(int p = 1; p <= 3 ; p ++){
            float media = aluno[p].med;
            int  faltas = aluno[p].faltas;
            char nome[30];
            strcpy(nome, aluno[p].nome);

            if(media >= 60 && faltas <= 18){
                printf("%s - Aprovado!\n", nome);
            }else if(media <60 && faltas <= 18){
                printf("%s - Reprovado por nota!\n", nome);
            }else{
                printf("%s - Reprovado por falta!\n", nome);
            }
        }
        return 0;
    }

    /*
    5.Crie uma estrutura representando os alunos de um curso de graduação. 
    A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, 
    nota da segunda prova, nota da terceira prova, média e número de faltas.

        (a) Permita ao usuário entrar com os dados de 3 alunos. 
        (b) Encontre o aluno com maior nota da primeira prova.
        (c) Encontre o aluno com maior média geral.
        (d) Encontre o aluno com menor média geral.
        (e) Mostre a situação final do aluno. Para ser aprovado o aluno precisa ter nota média final 
            maior ou igual a 60 e ter presença maior ou igual a 75% (considere um total de 72 aulas). 
            No caso de reprovação, mostrar o motivo da mesma, isto é, caso o aluno foi reprovado por 
            falta, mostrar “Reprovado por falta”. Caso tenha sido reprovado por nota, mostrar “Reprovado por nota”. 
            Se um aluno foi reprovado por falta e por nota, prevalece, como motivo para reprovação, as faltas. Assim,
            mostrar a mensagem “Reprovado por falta”. 


    -------------------------------------------------------------------------------
    Exemplo de saída:
    Entre com os dados do 1º aluno: 
    Matricula: 1
    Nome: Paulo
    Nota da prova 1: 50
    Nota da prova 2: 70
    Nota da prova 3: 60
    Numero de faltas: 12

    Entre com os dados do 2º aluno: 
    Matricula: 2
    Nome: Gustavo
    Nota da prova 1: 95
    Nota da prova 2: 90
    Nota da prova 3: 100
    Numero de faltas: 19

    Entre com os dados do 3º aluno: 
    Matricula: 3
    Nome: Luis
    Nota da prova 1: 50
    Nota da prova 2: 60
    Nota da prova 3: 58
    Numero de faltas: 2

    Aluno com maior nota na prova 1 foi Gustavo com 95,0 pontos.\n
    Aluno com maior media geral foi Gustavo com 95,0 pontos.\n
    Aluno com menor media geral foi Luis com 56,0 pontos.\n

    Situacao dos Alunos: 
    1- Paulo. Aprovado.
    2- Gustavo. Reprovado por falta.
    3- Luis. Reprovado por nota.
    -------------------------------------------------------------------------------
    */