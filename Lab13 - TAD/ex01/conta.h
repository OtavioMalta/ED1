typedef struct conta conta;

 struct conta{
     char titular[30];
     float saldo;
     int num;
 };

 int alterarSaldo(conta *c, float alt);