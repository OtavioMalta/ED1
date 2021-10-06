#include <stdio.h>
#include "TStack.h"
#include <string.h>
int main(){
    struct aluno a,b,c,d,e;

    a.matricula = 1;

    b.matricula = 2;

    c.matricula = 3;
    
    e.matricula = 4;

    TStack *st;
    int temp;
    st = stack_create();

    temp = stack_push(st, a);
    if(temp<0){printf("[ERRO]");}

    temp = stack_push(st, b);
    if(temp<0){printf("[ERRO]");}

    temp = stack_push(st, c);
    if(temp<0){printf("[ERRO]");}

    temp = stack_print(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %d",d.matricula);}

    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nRemovido com sucesso!");}

    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nRemovido com sucesso!");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %d",d.matricula);}

    temp = stack_empty(st);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nEMPTY: %d",temp);}

    temp = stack_full(st);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nFULL: %d",temp);}

    temp = stack_push(st, e);
    if(temp<0){printf("[ERRO]");}

    temp = stack_print(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %d",d.matricula);}

    temp = stack_free(st);
    if(temp<0){printf("[ERRO]");}
    return 0;
}
