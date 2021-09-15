#include <stdlib.h>
#include <stdio.h>
#include "TMat2D.h"
#include <time.h>  
#include <math.h>

struct TMat2D
{
  int nrows; // número de linhas
  int ncolumns; // número de colunas
  double *data; // ponteiro para os dados da matriz
};

// mat = mat2D_create(4,3);

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
TMat2D *mat2D_create(int nrows, int ncolumns){
    TMat2D *mat;
    mat = malloc(sizeof(TMat2D));
    if (mat != NULL){
        mat->data = calloc(nrows, ncolumns*sizeof(double));
        if (mat->data != NULL){
            mat->ncolumns = ncolumns;
            mat->nrows = nrows;
        } else {
            free(mat);
            return NULL;
        }
    }
    return mat;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_free(TMat2D *mat){
    if(mat == NULL){
        return -1;
    }else{
        if (mat->data != NULL){
            free(mat->data);
        }
        free(mat);
        return 0;
    }
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_set_value(TMat2D *mat, int i, int j, double val){
    if(mat == NULL){
        return -1;
    }else{
        int pos = j*(mat->nrows)+i;
        mat->data[pos] = val;
        return 0;
    }
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_get_value(TMat2D *mat, int i, int j, double *val){
    if(mat == NULL){
        return -1;
    }else{
        int pos = j*(mat->nrows)+i;
        *val = mat->data[pos];
        return 0;
    }
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_random(TMat2D *mat, double max, double min){
    if(mat == NULL){
        return -1;
    }
    srand(time(NULL));
    for(int i=0; i<mat->nrows; i++){
        for(int j = 0; j<mat->ncolumns; j++){
            double val = (double)rand() / ((double)RAND_MAX +1);
            mat->data[j*(mat->nrows)+i] =min+(val*(max-min));
        }
    }
}

void print_mat(TMat2D *mat){
    for(int i = 0; i < mat->nrows; i++){
        for(int j = 0; j < mat->ncolumns; j++){
            if(j < mat->ncolumns-1){
                printf("%.2lf   ",mat->data[j*(mat->nrows)+i]);
            }else{
                printf("%.2lf\n", mat->data[j*(mat->nrows)+i]);

            }
        }
    }
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_sum(TMat2D *mat1,TMat2D *mat2, TMat2D *mat3){
    if(mat1 == NULL || mat2 == NULL || mat3 == NULL){
        return -1;}
    if (mat1->nrows != mat2->nrows || mat2->nrows != mat3->nrows){
        return -1;}
    if (mat1->ncolumns != mat2->ncolumns || mat2->ncolumns != mat3->ncolumns){
        return -1;}

    int tam = mat1->ncolumns * mat1->nrows;
    for(int i = 0; i < tam; i++){
        mat3->data[i] =  mat1->data[i] + mat2->data[i];
    }
    return 0;
}

int mat2D_mult(TMat2D *mat1,TMat2D *mat2, TMat2D *mat3){
    if(mat1 == NULL || mat2 == NULL || mat3 == NULL) return -1;
    
    if(mat1->ncolumns != mat2->nrows) return -1;
    if(mat1->nrows != mat3->nrows || mat2->ncolumns != mat3->ncolumns) return -1;
    

    for(int i = 0; i < mat1->nrows; i++){
        for(int j = 0; j < mat2->ncolumns; j++){
            double soma = 0;
            for(int k = 0; k < mat1->ncolumns; k++){
                soma += mat1->data[k*mat1->nrows+i] * mat2->data[j*mat2->nrows+k];
            }
            mat3->data[j*mat3->nrows+i] = soma;
        }
    }
    return 0;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_mult_esc(TMat2D *mat1, TMat2D *mat2, int val){
    if(mat1 == NULL || mat2 == NULL) return -1;
    if (mat1->nrows != mat2->nrows) return -1;
    if (mat1->ncolumns != mat2->ncolumns) return -1; 

    int tam = mat1->ncolumns * mat1->nrows;
    for(int i = 0; i < tam; i++){
                mat2->data[i] =  mat1->data[i] * val;
            }
        return 0;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_diag(TMat2D *mat, double *val){
    if(mat == NULL) return -1;
    
    if(mat->ncolumns != mat->nrows) return -1;

    double aux = 0.0;
    int tam = mat->ncolumns * mat->nrows;
    for(int i = 0; i < tam; i += mat->nrows +1){
        aux += mat->data[i];
    }
    *val = aux;
    return 0;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_sum_row(TMat2D *m1, TMat2D *m2){
    if (m1 == NULL){
        return -1;
    }
    if (m2 == NULL){
        return -1;
    }
    double aux = 0.0;
    for(int i = 0 ; i < m1->nrows; i++){
        for(int j = 0; j < m1->ncolumns; j++){
            m2->data[i]+=m1->data[j*(m1->nrows)+i];
        }
    }
    return 0;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_sum_col(TMat2D *m1, TMat2D *m2){
    if (m1 == NULL){
        return -1;
    }
    if (m2 == NULL){
        return -1;
    }
    double aux = 0.0;
    for(int j = 0 ; j < m1->ncolumns; j++){
        for(int i = 0; i < m1->nrows; i++){
            m2->data[j]+=m1->data[j*(m1->nrows)+i];
        }
    }
    return 0;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_get_col(TMat2D *mat, int *val){
    if (mat == NULL){
        return -1;
    }
    *val = mat->ncolumns;
    return 0;
}

// Retorno: 
// -1 = [ERRO]
//  0 = Sucesso
int mat2D_get_row(TMat2D *mat, int *val){
    if (mat == NULL){
        return -1;
    }
    *val = mat->nrows;
    return 0;
}