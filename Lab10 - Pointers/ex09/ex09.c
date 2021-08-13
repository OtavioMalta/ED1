#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    double v[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,0.0};
    for(int i = 0; i < 10; i++){
        printf("%.1lf\n", *(v+i));
    }
    printf("Fim!");
    return 0;
}