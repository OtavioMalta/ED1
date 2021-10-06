#include <stdio.h>
#include "TStack.h"
#include <stdlib.h>
int main()
{
    struct chr *a,*b,*c,*d;
    a = malloc(sizeof(struct chr));
    b = malloc(sizeof(struct chr));
    c = malloc(sizeof(struct chr));
    d = malloc(sizeof(struct chr));
    a->c='a';
    b->c='b';
    c->c='c';
    //d->c='ddd';
    TStack *st;
	st = stack_create(5);

    int temp = stack_push(st, a);
    if(temp<0){printf("[ERRO]");}

    temp = stack_push(st, b);
    if(temp<0){printf("[ERRO]");}

    temp = stack_push(st, c);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, d);
    if(temp<0){printf("[ERRO]");
    }else{printf("TOP: %c", d->c);}

    temp = stack_print(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, d);
    if(temp<0){printf("[ERRO]");
    }else{printf("TOP: %c", d->c);}

    temp = stack_free(st);
    if(temp<0){printf("[ERRO]");}

    return 0;
}