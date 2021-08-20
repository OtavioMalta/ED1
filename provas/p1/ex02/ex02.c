#include <stdio.h>
#include <stdlib.h>

// Definir as estruturas necessárias aqui (copiar do exercício anterior):
struct livros{
    char nome[20];
    float preco;
    int novo; //0 para usado 1 para novo
    int ano;
};
// Função:
// Essa função retorna o livro usado mais antigo
// - Entrada: todos os livros cadastrados 
// - Saída: índice do vetor indicando o livro usado mais antigo
// (se houver empate pode ser retornado qualquer um dos livros)

int antigo(struct livros *l, int n){
    int ant = l[0].ano;
    for(int i = 0; i < n; i++){
        if(l[i].ano < ant && l[i].novo == 0){
            ant = i;
        }
    }
    return ant;
}

int main(){

    int n, a;
    struct livros *l;

    // Ex 01: permitir que o usuário cadastre quantos livros quiser
    //  - ler do teclado a quantidade de livros que o usuário escolheu
    //  - ler do teclado as informações dos livros
    printf("Informe quantos livros deseja cadastrar: ");
    scanf("%d", &n);
    fflush(stdin);

    for(int i = 0; i<n; i++){
        printf("Digite o nome do livro: ");
        fgets(l[i].nome, 20, stdin);
        
        printf("Digite o preco do livro: ");
        scanf("%f", &l[i].preco);

        printf("Digite se o livro eh novo(1) ou usado (0): ");
        scanf("%d", &l[i].novo);

        printf("Digite o ano do livro: ");
        scanf("%d", &l[i].ano);
        fflush(stdin);
    }
   // Ex02: utilizando a função de buscar, mostre
   // todas as informações do livro *usado* mais antigo

   // Todas as funções de entrada e saída devem estar no programa
   // principal

   // Dica: para testar, crie um vetor estático preenchido com alguns valores (opcional)
    printf("\n-----------------------\n");
    printf("Livro usado mais antigo: \n");
    a = antigo(l, n);    
    printf("Nome: %s", l[a].nome);
    printf("Preco: %.2f\n", l[a].preco);
    printf("Usado: Sim\n");
    printf("Ano: %d\n", l[a].ano);

  
    return 0;
}