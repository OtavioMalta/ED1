
typedef struct TMat2D TMat2D; 

TMat2D *mat2D_create(int nrows, int ncolumns); // OK
int mat2D_free(TMat2D *mat); // OK

void print_mat(TMat2D *mat); // OK

int mat2D_set_value(TMat2D *mat, int i, int j, double val); // OK
int mat2D_get_value(TMat2D *mat, int i, int j, double *val); // OK
int mat2D_random(TMat2D *mat,double max, double min); // OK
int mat2D_sum(TMat2D *mat1,TMat2D *mat2, TMat2D *mat3); // OK
int mat2D_mult(TMat2D *mat1,TMat2D *mat2, TMat2D *mat3);  
int mat2D_mult_esc(TMat2D *mat1, TMat2D *mat2, int val); // OK
int mat2D_diag(TMat2D *mat, double *val); // OK
int mat2D_sum_row(TMat2D *m1, TMat2D *m2); // OK
int mat2D_sum_col(TMat2D *m1, TMat2D *m2); // OK
int mat2D_get_col(TMat2D *mat,int *val); // OK
int mat2D_get_row(TMat2D *mat,int *val); // OK
