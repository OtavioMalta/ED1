#include <stdio.h>

int main(){
    printf("<< Pointers >>\n");
    int i;
    double d;
    void *p;

    p = &i;
    printf("Digite o valor do inteiro: ");
    scanf("%d", (int*)p);
    printf("Inteiro: %d\n\n", *(int*)p);

    p = &d;
    printf("Digite o valor do double: ");
    scanf("%lf", (double*)p);
    printf("Double: %.2lf\n\n", *(double*)p);
    return 0;
}