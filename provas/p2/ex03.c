/*
 3) Considerando o TAD Matriz implementado em aula², crie uma nova 
função que permite aumentar o tamanho da matriz (mat2d_increase_size).
Os elementos da matriz original devem continuar na mesma posição que
estavam antes do aumento. Os novos elementos devem receber valor 0.
Por exemplo, caso o usuário tenha uma matriz 2x2 e queria que ela vire uma 
matriz 3x3, ele poderá usar a função de aumento de tamanho como
abaixo:

// criando matriz 2x2
mat = mat2D_create(2,2);

// Exemplo de preenchimento
// |2 7|
// |4 5|

// aumentando o tamanho da matriz para 3x3
mat2d_increase_size(mat,3,3)

// Exemplo após o aumento de tamanho
// |2 7 0|
// |4 5 0|
// |0 0 0|



²struct TMat2D
 {
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
 };

*/
// check:<<<erro: e3.1: não fez os testes comparando o tamanho novo com o antiga para saber se o tamanho é maior OU fez o teste considerando somente o total de elementos  OU fez erros no teste>>>>
// check:<<<erro: e3.2: O ideal é  utilizar uma outra variável para receber o que é retornado pelo realloc, pois se ele não funcionar os dados originais estarão preservados>>>>
// check:<<<erro: e3.3: deve-se lembrar da representação linear da matriz na memória. Isso implica em reposicionar alguns elementos no vetor linear que estavam na matriz original>>>>
// check:<<<erro: e3.4: Faltou zerar os novos elementos>>>>
int mat2d_increase_size(TMat2D *mat, int r, int c){
    if(mat == NULL){
        return -1;
    }
    if(r<=0 || c<=0){
        return -1;
    }
    mat = realloc(mat, r*c*sizeof(double));// check:<<<erro: misturou tipos>>>>
    if(mat != NULL){
        mat->ncolumns = c;
        mat->nrows = r;
        return 0;
    }else{
        return -1;
    }
}