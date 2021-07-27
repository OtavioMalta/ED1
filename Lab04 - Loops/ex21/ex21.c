#include <stdio.h>
int main(){
    int f,p=1;
    for (int i = 1; i < 11; i++)
    {
        f=i*p;
        printf("%d! = %d\n",i,f);
        p=f;
    }
    
}