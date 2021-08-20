#include <stdio.h>
#include <stdlib.h>

// Fazer um programa para cadastro de livros. As informações para cadastro são: 
// - o nome do livro
// - O preço
// - Indicação se o livro é novo ou usado
// - ano de compra


// Definir as estruturas necessárias aqui:
struct livros{
    char nome[20];
    float preco;
    int novo; //1 para usado 0 para novo
    int ano;
};

int main(){
    int n;
    struct livros *l;
    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &n);
    fflush(stdin);
    l = malloc(n*sizeof(struct livros));
    for(int i = 0; i<n; i++){
        printf("Digite o nome do livro: ");
        fgets(l[i].nome, 20, stdin);
        
        printf("Digite o preco do livro: ");
        scanf("%f", &l[i].preco);

        printf("Digite se o livro eh novo(0) ou usado (1): ");
        scanf("%d", &l[i].novo);

        printf("Digite o ano do livro: ");
        scanf("%d", &l[i].ano);
        fflush(stdin);
    }

    for(int j = 0; j<n; j++){
        printf("\nLivros Cadastrados: \n");
        printf("Nome do livro: %s", l[j].nome);
        printf("Preco R$ %.2f\n", l[j].preco);
        printf("Usado: ");
        if(l[j].novo == 1){
            printf("Sim\n");
        }else if(l[j].novo == 0){
            printf("Nao\n");
        }
        printf("Ano: %d\n", l[j].ano);
    }
    free(l);
    return 0;
}