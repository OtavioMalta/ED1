#include <stdio.h> 
#include <string.h> 
int main(void){
     char buff[5];     
     int pass = 0;     
     printf("\n Entre com a senha : \n"); 
     gets(buff);     
     if(strcmp(buff, "1234"))  {
        printf ("\n Senha Errada \n");     
        }  else   {        
        printf ("\n Senha Correta \n");         
        pass = 1;     
        }    
            
        if (pass) {
            printf ("\n Acesso liberado \n");     
            } else {         
            printf ("\n Acesso negado \n");     
            }    
            return 0; 
}  

/*
A) Liberar o acesso caso a senha seja digitada corretamente (1234).

B) A saída será "Senha Correta" "Acesso liberado". Isso pois a comparação 'strcmp'
retorna 0 quando os parâmetros são iguais.

C) a- "Senha Errada" "Acesso negado" 
C) b- "Senha Errada" "Acesso negado"
C) c- "Senha Errada" "Acesso liberado"

D) No terceiro caso ('123456') houve um comportamento inesperado. Isso porque ao 
tentar atribuir um valor que ultrapassa a alocação de memória definida na linha 4,
o programa acaba invadindo memória, o que resulta tal comportamento.

*/