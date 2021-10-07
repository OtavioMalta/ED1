#include <stdio.h>
#include "TStack.h"
#include <stdlib.h>
int main()
{
    char d;
    
    TStack *st;
	st = stack_create(8);

    int temp = stack_push(st, 'a');
    if(temp<0){printf("\n[ERRO ao implementar A]");}

    temp = stack_push(st, 'b');
    if(temp<0){printf("\n[ERRO ao implementar B]");}

    temp = stack_push(st, 'c');
    if(temp<0){printf("\n[ERRO ao implementar C] %d",temp);}

    temp = stack_push(st, 'e');
    if(temp<0){printf("\n[ERRO ao implementar E] %d",temp);}

    temp = stack_push(st, 'f');
    if(temp<0){printf("\n[ERRO ao implementar F] %d",temp);}

    temp = stack_push(st, 'g');
    if(temp<0){printf("\n[ERRO ao implementar G] %d",temp);}

    temp = stack_push(st, 'h');
    if(temp<0){printf("\n[ERRO ao implementar H] %d",temp);}

    temp = stack_push(st, 'i');
    if(temp<0){printf("\n[ERRO ao implementar I] %d",temp);}

    temp = stack_full(st);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nFULL: %d", temp);}

    temp = stack_top(st, &d);
    if(temp<0){printf("\n[ERRO]");
    }else{printf("\nTOP: %c", d);}

    /*temp = stack_print(st);
    if(temp<0){printf("[ERRO]");}*/

    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}

    /**********************/

    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}
    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}
    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}
    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}
    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}
    temp = stack_pop(st);
    if(temp<0){printf("[ERRO]");}

    temp = stack_top(st, &d);
    if(temp<0){printf("[ERRO]");
    }else{printf("\nTOP: %c", d);}


    temp = stack_free(st);
    if(temp<0){printf("[ERRO ao liberar a lista]");}

    return 0;
}