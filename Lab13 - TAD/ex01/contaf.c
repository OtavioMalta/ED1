#include "conta.h"
#include <math.h>
int alterarSaldo(conta *c, float alt){
    float temp;
    if (alt < 0 && c->saldo < abs(alt)){
        return 0;
        
    }else{
        c->saldo += + alt;  
        return 1;
    }
}