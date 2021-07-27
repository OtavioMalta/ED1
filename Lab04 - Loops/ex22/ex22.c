#include <stdio.h>
int main(){
    long long int f,p=362880;
    for (int i = 10; i < 16; i++)
    {
        f=i*p;
        printf("%d! = %lld\n",i,f);
        p=f;
    }   
}
//O espaço de memória de um simples int não é o 
//suficiente para armazenar um numero tão grande
//como o 15!, logo é necessário tipos maiores, 
//como n=o long long int