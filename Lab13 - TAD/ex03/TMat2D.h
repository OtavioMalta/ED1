
typedef struct TMat2D TMat2D; 

TMat2D *mat2D_create(int nrows, int ncolumns);
int mat2D_free(TMat2D *mat);

int mat2D_set_value(TMat2D *mat, int i, int j, double val);
int mat2D_get_value(TMat2D *mat, int i, int j, double *val);
