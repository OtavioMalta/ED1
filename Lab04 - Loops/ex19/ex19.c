#include <stdio.h>
int main(){
    int p;
    float jose = 50000;
    float carlos = 25000;
    for(int i = 0; jose >= carlos; i++){
        carlos+=3000;
        jose+=800;
        if(carlos>jose){
            printf("Carlos levara %d meses para ficar com mais dinheiro que Jose",i);
        }
    }
}