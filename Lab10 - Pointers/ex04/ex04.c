#include<stdio.h>

int main() {
    int val[5] = {2,4,5,8,10};
    int *e;
    e = &val[0];
    
    printf(" val[0] = %d;\n val[0] = %d;\n val[0] = %d;\n val[0] = %d;\n val[0] = %d;\n ", *(e)-1, *(e+1)-1, *(e+2)-1, *(e+3)-1, *(e+4)-1);

    return 0;
}