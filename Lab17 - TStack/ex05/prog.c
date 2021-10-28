#include <stdio.h>
#include "TStack.h"
#include <string.h>
int main()
{
    Pilha *pi;
    pi = stack_create();
    if(pi != NULL){printf("Pilha criada com sucesso!");}
    else{printf("Erro ao criar a pilha!");}

    char pos[30], inf[30] = "(A*(B+(C*(D+(E*(F+G))))))", *aux;
    int p = 0;
    int tam = strlen(inf);
    printf("ok1");
    if(inf[2]==')'){printf("OLA");}
    printf("ok2");
     for(int i = 0; i < tam; i ++){
        char c;
        
        if(inf[i] == '('){
            stack_push(pi, inf[i]);
        }else if(inf[i]==')'){
            stack_consult(pi, aux);
            stack_pop(pi);
            
            while(*aux != '('){
                pos[p++] = *aux;
                
                stack_consult(pi, aux);
                stack_pop(pi);
        }
        }else if(inf[i] == '*' || inf[i] == '/' ){
            stack_consult(pi,aux);
            stack_pop(pi);
            while(*aux != '(' && *aux != '+' && *aux != '-'){
                pos[p++] = *aux;
                
                stack_consult(pi,aux);
                stack_pop(pi);
            }
            stack_push(pi, *aux);
            stack_push(pi, inf[i]);
        }else if(inf[i] == '+' || inf[i] == '-'){
            stack_consult(pi, aux);
            stack_pop(pi);
            while(*aux != '('){
                pos[p++] = *aux;
                
                stack_consult(pi, aux);
                stack_pop(pi);
            }
            
            stack_push(pi, *aux);
            stack_push(pi, inf[i]);
        }else{
            pos[p++] = inf[i];
            
        }
    }
    pos[p]='\0';
    printf("pos = %s\n", pos);

    stack_free(pi);
    return 0;

}
   