#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int v[10] = {1,2,3,4,5,6,7,8,9,0};
    for(int i = 9; i >=0; i--){
        printf("%d\n", *(v+i));
    }
    printf("Fim!");
    return 0;
}