#include <stdio.h>
#include "TMat2D.h"
#include <stdlib.h>
int main(){
    TMat2D *m1, *m2, *m3, *m4;
    double v1,v2,v3, v;
    int temp = 0;

    m1 = mat2D_create(4,4);
    m2 = mat2D_create(4,4);
    m3 = mat2D_create(4,4);
    m4 = mat2D_create(4,4);

    mat2D_random(m1, 5, 15); 
    mat2D_random(m2, 20, 30);

    // Set
    mat2D_set_value(m1, 1,1, 0.01);

    // Get
    mat2D_get_value(m1,1,1,&v);
    printf("Testando o Get e o Set: %.2lf", v);

    printf("\n---------Somando---------");
    temp = mat2D_sum(m1,m2,m3);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");
    }else{
        printf("\nMatriz 1: \n");
        print_mat(m1);
        
        printf("\nMatriz 2: \n");
        print_mat(m2);

        printf("\nMatriz Resultado:\n");
        print_mat(m3);
    }
        
    printf("\n----------Multiplicando por um valor----------");
    temp = mat2D_mult_esc(m1, m4, 2);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");
    }else{
        printf("\nMatriz 1: \n");
        print_mat(m1);

        printf("\nMatriz Resultado:\n");
        print_mat(m4);
    }
        
    printf("\n----------Calculando o traco----------\n");
    double val;
    temp = mat2D_diag(m1, &val);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");
    }else{
        printf("%.2lf\n", val);
    }

    printf("\n----------Multiplicando matrizes----------\n");
    temp = mat2D_mult(m1, m2, m3);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");
    }else{
        printf("\nMatriz 1: \n");
        print_mat(m1);
        
        printf("\nMatriz 2: \n");
        print_mat(m2);

        printf("\nMatriz Resultado:\n");
        print_mat(m3);
        }

    printf("\n----------Somando Linhas----------\n");
    int row;
    temp = mat2D_get_row(m1, &row);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");}
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");}
     
    TMat2D *m5;
    m5 = mat2D_create(row,1);
    temp = mat2D_sum_row(m1, m5);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");
        }else{
        print_mat(m5);
        }
    /* Usando um vetor
    double *vet;
    vet = calloc(row, sizeof(double));
    mat2D_sum_row(m1, vet);
    for(int i = 0; i < row; i++){
        printf("Linha %d = %.2lf\n", i,vet[i]);
    }*/

    printf("\n----------Somando Colunas----------\n");
    int col;
    temp = mat2D_get_col(m1, &col);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");}
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");}

    TMat2D *m6;
    m6 = mat2D_create(1,col);
    temp = mat2D_sum_col(m1, m6);
    if(temp == -1){
        printf("\n[Erro] Verifique os valores! \n");
        }else{
        print_mat(m6);
        }
    
    mat2D_free(m1);
    mat2D_free(m2);
    mat2D_free(m3);
    mat2D_free(m4);
    mat2D_free(m5);
    mat2D_free(m6);
}