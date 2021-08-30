typedef struct conta conta;

 conta* cria_conta(char *titular, int num, float saldo);
 int alterarSaldo(conta *c, float alt);
 int get_conta_inf(conta *c, char *titular, int *num, float *saldo);
 void imprime_conta(conta *c);
 int destroi_conta(conta *c);