    #include<stdio.h>
    #include<string.h>

    struct telefone {
        char tel[12];
        char ddd[5];
    };

    struct data {
        char dia[3];
        char mes[3];
        char ano[5];
    };

    struct endereco{
        char rua[50];
        char num[10];
        char compl[20];
        char cidade[50];
        char estado[5];
        char cep[12];
    };

    struct dados {
        char nome[50]; 
        char id[20];
        char cpf[12];
        char sexo[2];
        char eCivil[10];  
        struct data data_nascimento;
        struct endereco endereco_residencial; 
        struct telefone telefone_residencial; 
        struct endereco endereco_comercial;
        struct telefone telefone_comercial;
        struct data data_ingresso;
        char salario[20];
    };

    void printar(struct dados cadastro[5], int t){
        for(int i=0; i<t; i++){
            printf("\nPosicao %d\n", i);
            printf("Informacoes Pessoais:\n");
            printf("Nome: %s CPF: %s Sexo: %s\n", cadastro[i].nome, cadastro[i].cpf, cadastro[i].sexo);
            printf("Salario: %s, Identidade: %s\n", cadastro[i].salario, cadastro[i].id);
            printf("Telefone residencial: (%s)%s\n", cadastro[i].telefone_residencial.ddd, cadastro[i].telefone_residencial.tel);
            printf("Telefone: (%s)%s\n", cadastro[i].telefone_comercial.ddd, cadastro[i].telefone_comercial.tel);
            printf("Data de Nascimento: %s/%s/%s\n", cadastro[i].data_nascimento.dia, cadastro[i].data_nascimento.mes, cadastro[i].data_nascimento.ano);
            printf("Data de ingresso: %s/%s/%s\n", cadastro[i].data_ingresso.dia, cadastro[i].data_ingresso.mes, cadastro[i].data_ingresso.ano);
            printf("\nendereco comercial: \n");
            printf("Rua: %s, Nº: %s, Complemento: %s, Cidade: %s\n", cadastro[i].endereco_comercial.rua, cadastro[i].endereco_comercial.num, cadastro[i].endereco_comercial.compl, cadastro[i].endereco_comercial.cidade);
            printf("Estado: %s, CEP: %s\n", cadastro[i].endereco_comercial.estado, cadastro[i].endereco_comercial.cep);
            printf("\nendereco residencial: \n");
            printf("Rua: %s, Nº: %s, Complemento: %s, Cidade: %s\n", cadastro[i].endereco_residencial.rua, cadastro[i].endereco_residencial.num, cadastro[i].endereco_residencial.compl, cadastro[i].endereco_residencial.cidade);
            printf("Estado: %s, CEP: %s\n", cadastro[i].endereco_residencial.estado, cadastro[i].endereco_residencial.cep);
        }
    }

    void novo(struct dados cadastro[5]){
        int x;
        char str[500];
        printf("Digite a posicao do novo cadastro: "); 
        scanf("%d", &x); 
        printf("Digite o nome: ");
        fflush(stdin);
        gets(str); 
        strcpy(cadastro[x].nome,str); 
        cadastro[x].nome[strcspn(cadastro[x].nome, "\n")] = '\0';

        printf("Digite a identidade: ");
        gets(str); 
        strcpy(cadastro[x].cpf,str); 
        cadastro[x].cpf[strcspn(cadastro[x].cpf, "\n")] = '\0';

        printf("Digite o sexo: ");
        gets(str); 
        strcpy(cadastro[x].sexo,str); 
        cadastro[x].sexo[strcspn(cadastro[x].sexo, "\n")] = '\0';

        printf("Digite o estado civil: ");
        gets(str); 
        strcpy(cadastro[x].eCivil,str); 
        cadastro[x].eCivil[strcspn(cadastro[x].eCivil, "\n")] = '\0';

        printf("Data de nascimento: \n");
        printf("Dia: ");
        gets(str); 
        strcpy(cadastro[x].data_nascimento.dia,str); 
        cadastro[x].data_nascimento.dia[strcspn(cadastro[x].data_nascimento.dia, "\n")] = '\0';

        printf("Mes: ");
        gets(str); 
        strcpy(cadastro[x].data_nascimento.mes,str); 
        cadastro[x].data_nascimento.mes[strcspn(cadastro[x].data_nascimento.mes, "\n")] = '\0';

        printf("Ano: ");
        gets(str); 
        strcpy(cadastro[x].data_nascimento.ano,str); 
        cadastro[x].data_nascimento.ano[strcspn(cadastro[x].data_nascimento.ano, "\n")] = '\0';

        printf("enderecoereco residencial: \n");
        printf("Rua: ");
        gets(str); 
        strcpy(cadastro[x].endereco_residencial.rua,str); 
        cadastro[x].endereco_residencial.rua[strcspn(cadastro[x].endereco_residencial.rua, "\n")] = '\0';

        printf("Numero: ");
        gets(str); 
        strcpy(cadastro[x].endereco_residencial.num,str); 
        cadastro[x].endereco_residencial.num[strcspn(cadastro[x].endereco_residencial.num, "\n")] = '\0';

        printf("Complemento: ");
        gets(str); 
        strcpy(cadastro[x].endereco_residencial.compl,str); 
        cadastro[x].endereco_residencial.compl[strcspn(cadastro[x].endereco_residencial.compl, "\n")] = '\0';

        printf("Cidade: ");
        gets(str); 
        strcpy(cadastro[x].endereco_residencial.cidade,str); 
        cadastro[x].endereco_residencial.cidade[strcspn(cadastro[x].endereco_residencial.cidade, "\n")] = '\0';

        printf("Estado: ");
        gets(str); 
        strcpy(cadastro[x].endereco_residencial.estado,str); 
        cadastro[x].endereco_residencial.estado[strcspn(cadastro[x].endereco_residencial.estado, "\n")] = '\0';

        printf("CEP: ");
        gets(str); 
        strcpy(cadastro[x].endereco_residencial.cep,str); 
        cadastro[x].endereco_residencial.cep[strcspn(cadastro[x].endereco_residencial.cep, "\n")] = '\0';

        printf("Telefone residencial: \n");
        printf("DDD: ");
        gets(str); 
        strcpy(cadastro[x].telefone_residencial.ddd,str); 
        cadastro[x].telefone_residencial.ddd[strcspn(cadastro[x].telefone_residencial.ddd, "\n")] = '\0';

        printf("Telefone: ");
        gets(str); 
        strcpy(cadastro[x].telefone_residencial.tel,str); 
        cadastro[x].telefone_residencial.tel[strcspn(cadastro[x].telefone_residencial.tel, "\n")] = '\0';

        printf("enderecoereco comercial: \n");
        printf("Rua: ");
        gets(str); 
        strcpy(cadastro[x].endereco_comercial.rua,str); 
        cadastro[x].endereco_comercial.rua[strcspn(cadastro[x].endereco_comercial.rua, "\n")] = '\0';

        printf("Numero: ");
        gets(str); 
        strcpy(cadastro[x].endereco_comercial.num,str); 
        cadastro[x].endereco_comercial.num[strcspn(cadastro[x].endereco_comercial.num, "\n")] = '\0';

        printf("Complemento: ");
        gets(str); 
        strcpy(cadastro[x].endereco_comercial.compl,str); 
        cadastro[x].endereco_comercial.compl[strcspn(cadastro[x].endereco_comercial.compl, "\n")] = '\0';

        printf("Cidade: ");
        gets(str); 
        strcpy(cadastro[x].endereco_comercial.cidade,str); 
        cadastro[x].endereco_comercial.cidade[strcspn(cadastro[x].endereco_comercial.cidade, "\n")] = '\0';

        printf("Estado: ");
        gets(str); 
        strcpy(cadastro[x].endereco_comercial.estado,str); 
        cadastro[x].endereco_comercial.estado[strcspn(cadastro[x].endereco_comercial.estado, "\n")] = '\0';

        printf("CEP: ");
        gets(str); 
        strcpy(cadastro[x].endereco_comercial.cep,str); 
        cadastro[x].endereco_comercial.cep[strcspn(cadastro[x].endereco_comercial.cep, "\n")] = '\0';

        printf("Telefone comercial: \n");
        printf("DDD: ");
        gets(str); 
        strcpy(cadastro[x].telefone_comercial.ddd,str); 
        cadastro[x].telefone_comercial.ddd[strcspn(cadastro[x].telefone_comercial.ddd, "\n")] = '\0';

        printf("Telefone: ");
        gets(str); 
        strcpy(cadastro[x].telefone_comercial.tel,str); 
        cadastro[x].telefone_comercial.tel[strcspn(cadastro[x].telefone_comercial.tel, "\n")] = '\0';

        printf("Data de ingresso: \n");
        printf("Dia: ");
        gets(str); 
        strcpy(cadastro[x].data_ingresso.dia,str); 
        cadastro[x].data_ingresso.dia[strcspn(cadastro[x].data_ingresso.dia, "\n")] = '\0';

        printf("Mes: ");
        gets(str); 
        strcpy(cadastro[x].data_ingresso.mes,str); 
        cadastro[x].data_ingresso.mes[strcspn(cadastro[x].data_ingresso.mes, "\n")] = '\0';

        printf("Ano: ");
        gets(str); 
        strcpy(cadastro[x].data_ingresso.ano,str); 
        cadastro[x].data_ingresso.ano[strcspn(cadastro[x].data_ingresso.ano, "\n")] = '\0';

        printf("Digite o salario: ");
        gets(str); 
        strcpy(cadastro[x].salario,str); 
        cadastro[x].salario[strcspn(cadastro[x].salario, "\n")] = '\0';
    }

    void apos(struct dados cadastro[5], int t){
        int x[5];
        for(int i=0; i<t; i++){
            sscanf(cadastro[i].data_nascimento.ano, "%d", &x[i]);
            if(x[i] >= 1990){
                printf("\nCadastro %d\n", i+1);
                printf("Nome: %s\n", cadastro[i].nome);
                printf("Identidade: %s\n", cadastro[i].id);
                printf("CPF: %s\n", cadastro[i].cpf);
                printf("Sexo: %s\n", cadastro[i].sexo);
                printf("Estado Civil: %s\n", cadastro[i].eCivil);
                printf("Data de Nascimento: %s/%s/%s\n", cadastro[i].data_nascimento.dia, cadastro[i].data_nascimento.mes, cadastro[i].data_nascimento.ano);
                printf("enderecoereco residencial: %s, %s (%s), %s-%s, %s\n", cadastro[i].endereco_residencial.rua, cadastro[i].endereco_residencial.num, cadastro[i].endereco_residencial.compl, cadastro[i].endereco_residencial.cidade, cadastro[i].endereco_residencial.estado, cadastro[i].endereco_residencial.cep);
                printf("Telefone residencial: (%s)%s\n", cadastro[i].telefone_residencial.ddd, cadastro[i].telefone_residencial.tel);
                printf("enderecoereco comercial: %s, %s (%s), %s-%s, %s\n", cadastro[i].endereco_comercial.rua, cadastro[i].endereco_comercial.num, cadastro[i].endereco_comercial.compl, cadastro[i].endereco_comercial.cidade, cadastro[i].endereco_comercial.estado, cadastro[i].endereco_comercial.cep);
                printf("Telefone comercial: (%s)%s\n", cadastro[i].telefone_comercial.ddd, cadastro[i].telefone_comercial.tel);
                printf("Data de ingresso: %s/%s/%s\n", cadastro[i].data_ingresso.dia, cadastro[i].data_ingresso.mes, cadastro[i].data_ingresso.ano);
                printf("Salario: %s\n", cadastro[i].salario);
            }
        }
    }

    void copia(struct dados cadastro[5], int t){
        int a, b;
        printf("Digite a posicao que sera copiada: ");
        scanf("%d", &b);
        printf("Digite a posicao a qual sera copiada: ");
        scanf("%d", &a);
        fflush(stdin);

        strcpy(cadastro[a].nome, cadastro[b].nome);
        strcpy(cadastro[a].id, cadastro[b].id);
        strcpy(cadastro[a].cpf, cadastro[b].cpf);
        strcpy(cadastro[a].sexo, cadastro[b].sexo);
        strcpy(cadastro[a].eCivil, cadastro[b].eCivil);
        strcpy(cadastro[a].data_nascimento.dia, cadastro[b].data_nascimento.dia);
        strcpy(cadastro[a].data_nascimento.mes, cadastro[b].data_nascimento.mes);
        strcpy(cadastro[a].data_nascimento.ano, cadastro[b].data_nascimento.ano);
        strcpy(cadastro[a].endereco_residencial.rua, cadastro[b].endereco_residencial.rua);
        strcpy(cadastro[a].endereco_residencial.num, cadastro[b].endereco_residencial.num);
        strcpy(cadastro[a].endereco_residencial.compl, cadastro[b].endereco_residencial.compl);
        strcpy(cadastro[a].endereco_residencial.cidade, cadastro[b].endereco_residencial.cidade);
        strcpy(cadastro[a].endereco_residencial.estado, cadastro[b].endereco_residencial.estado);
        strcpy(cadastro[a].endereco_residencial.cep, cadastro[b].endereco_residencial.cep);
        strcpy(cadastro[a].telefone_residencial.ddd, cadastro[b].telefone_residencial.ddd);
        strcpy(cadastro[a].telefone_residencial.tel, cadastro[b].telefone_residencial.tel);
        strcpy(cadastro[a].endereco_comercial.rua, cadastro[b].endereco_comercial.rua);
        strcpy(cadastro[a].endereco_comercial.num, cadastro[b].endereco_comercial.num);
        strcpy(cadastro[a].endereco_comercial.compl, cadastro[b].endereco_comercial.compl);
        strcpy(cadastro[a].endereco_comercial.cidade, cadastro[b].endereco_comercial.cidade);
        strcpy(cadastro[a].endereco_comercial.estado, cadastro[b].endereco_comercial.estado);
        strcpy(cadastro[a].endereco_comercial.cep, cadastro[b].endereco_comercial.cep);
        strcpy(cadastro[a].telefone_comercial.ddd, cadastro[b].telefone_comercial.ddd);
        strcpy(cadastro[a].telefone_comercial.tel, cadastro[b].telefone_comercial.tel);
        strcpy(cadastro[a].data_ingresso.dia, cadastro[b].data_ingresso.dia);
        strcpy(cadastro[a].data_ingresso.mes, cadastro[b].data_ingresso.mes);
        strcpy(cadastro[a].data_ingresso.ano, cadastro[b].data_ingresso.ano);
        strcpy(cadastro[a].salario, cadastro[b].salario);
    }

    int main() {
        struct dados cadastro[5];

        //(a) Atribuição para cadastro
        strcpy(cadastro[0].nome, "Joao Carlos da Silva");
        strcpy(cadastro[0].id, "54.487.659");
        strcpy(cadastro[0].cpf, "125.354.487-68");
        strcpy(cadastro[0].sexo, "M");
        strcpy(cadastro[0].eCivil, "Casado");
        strcpy(cadastro[0].data_nascimento.dia, "02");
        strcpy(cadastro[0].data_nascimento.mes, "12");
        strcpy(cadastro[0].data_nascimento.ano, "1985");
        strcpy(cadastro[0].endereco_residencial.rua, "Rua Valerio Costa");
        strcpy(cadastro[0].endereco_residencial.num, "254");
        strcpy(cadastro[0].endereco_residencial.compl, "Predio B");
        strcpy(cadastro[0].endereco_residencial.cidade, "Uberlandia");
        strcpy(cadastro[0].endereco_residencial.estado, "MG");
        strcpy(cadastro[0].endereco_residencial.cep, "38.412-987");
        strcpy(cadastro[0].telefone_residencial.ddd, "045");
        strcpy(cadastro[0].telefone_residencial.tel, "99856-8775");
        strcpy(cadastro[0].endereco_comercial.rua, "Av Sao Jose");
        strcpy(cadastro[0].endereco_comercial.num, "1542");
        strcpy(cadastro[0].endereco_comercial.compl, "Sala 3C");
        strcpy(cadastro[0].endereco_comercial.cidade, "Uberlandia");
        strcpy(cadastro[0].endereco_comercial.estado, "MG");
        strcpy(cadastro[0].endereco_comercial.cep, "38.412-245");
        strcpy(cadastro[0].telefone_comercial.ddd, "045");
        strcpy(cadastro[0].telefone_comercial.tel, "93558-8755");
        strcpy(cadastro[0].data_ingresso.dia, "31");
        strcpy(cadastro[0].data_ingresso.mes, "08");
        strcpy(cadastro[0].data_ingresso.ano, "2014");
        strcpy(cadastro[0].salario, "RS 5680,54");

        strcpy(cadastro[1].nome, "Mariana Goncalves Costa");
        strcpy(cadastro[1].id, "45.658.943");
        strcpy(cadastro[1].cpf, "457.463.248-45");
        strcpy(cadastro[1].sexo, "F");
        strcpy(cadastro[1].eCivil, "Solteira");
        strcpy(cadastro[1].data_nascimento.dia, "02");
        strcpy(cadastro[1].data_nascimento.mes, "10");
        strcpy(cadastro[1].data_nascimento.ano, "1997");
        strcpy(cadastro[1].endereco_residencial.rua, "Rua Amarindo Camargo");
        strcpy(cadastro[1].endereco_residencial.num, "131");
        strcpy(cadastro[1].endereco_residencial.compl, "Casa");
        strcpy(cadastro[1].endereco_residencial.cidade, "Vale Azul");
        strcpy(cadastro[1].endereco_residencial.estado, "MG");
        strcpy(cadastro[1].endereco_residencial.cep, "38.412-588");
        strcpy(cadastro[1].telefone_residencial.ddd, "078");
        strcpy(cadastro[1].telefone_residencial.tel, "99754-6853");
        strcpy(cadastro[1].endereco_comercial.rua, "Av Sao Jose");
        strcpy(cadastro[1].endereco_comercial.num, "1542");
        strcpy(cadastro[1].endereco_comercial.compl, "Sala 3C");
        strcpy(cadastro[1].endereco_comercial.cidade, "Uberlandia");
        strcpy(cadastro[1].endereco_comercial.estado, "MG");
        strcpy(cadastro[1].endereco_comercial.cep, "38.412-245");
        strcpy(cadastro[1].telefone_comercial.ddd, "045");
        strcpy(cadastro[1].telefone_comercial.tel, "93558-8755");
        strcpy(cadastro[1].data_ingresso.dia, "05");
        strcpy(cadastro[1].data_ingresso.mes, "06");
        strcpy(cadastro[1].data_ingresso.ano, "2013");
        strcpy(cadastro[1].salario, "RS 5897,40");

        strcpy(cadastro[2].nome, "Caio Silveira");
        strcpy(cadastro[2].id, "35.457.986");
        strcpy(cadastro[2].cpf, "356.548.678-92");
        strcpy(cadastro[2].sexo, "M");
        strcpy(cadastro[2].eCivil, "Solteiro");
        strcpy(cadastro[2].data_nascimento.dia, "14");
        strcpy(cadastro[2].data_nascimento.mes, "12");
        strcpy(cadastro[2].data_nascimento.ano, "1989");
        strcpy(cadastro[2].endereco_residencial.rua, "Rua Valerio Costa");
        strcpy(cadastro[2].endereco_residencial.num, "348");
        strcpy(cadastro[2].endereco_residencial.compl, "Bloco C");
        strcpy(cadastro[2].endereco_residencial.cidade, "Araraquara");
        strcpy(cadastro[2].endereco_residencial.estado, "SP");
        strcpy(cadastro[2].endereco_residencial.cep, "54.248-986");
        strcpy(cadastro[2].telefone_residencial.ddd, "065");
        strcpy(cadastro[2].telefone_residencial.tel, "98564-9831");
        strcpy(cadastro[2].endereco_comercial.rua, "Rua Amaro Delgado");
        strcpy(cadastro[2].endereco_comercial.num, "653");
        strcpy(cadastro[2].endereco_comercial.compl, "Predio Unico");
        strcpy(cadastro[2].endereco_comercial.cidade, "Araraquara");
        strcpy(cadastro[2].endereco_comercial.estado, "SP");
        strcpy(cadastro[2].endereco_comercial.cep, "54.248-512");
        strcpy(cadastro[2].telefone_comercial.ddd, "065");
        strcpy(cadastro[2].telefone_comercial.tel, "95452-8614");
        strcpy(cadastro[2].data_ingresso.dia, "16");
        strcpy(cadastro[2].data_ingresso.mes, "09");
        strcpy(cadastro[2].data_ingresso.ano, "2018");
        strcpy(cadastro[2].salario, "RS 3152,54");

        strcpy(cadastro[3].nome, "Carina Amaral");
        strcpy(cadastro[3].id, "45.615.354");
        strcpy(cadastro[3].cpf, "345.658.945-95");
        strcpy(cadastro[3].sexo, "F");
        strcpy(cadastro[3].eCivil, "Solteiro");
        strcpy(cadastro[3].data_nascimento.dia, "09");
        strcpy(cadastro[3].data_nascimento.mes, "11");
        strcpy(cadastro[3].data_nascimento.ano, "1992");
        strcpy(cadastro[3].endereco_residencial.rua, "Rua Amada Souza");
        strcpy(cadastro[3].endereco_residencial.num, "356");
        strcpy(cadastro[3].endereco_residencial.compl, "Ap 23B");
        strcpy(cadastro[3].endereco_residencial.cidade, "Rosa Branca");
        strcpy(cadastro[3].endereco_residencial.estado, "MT");
        strcpy(cadastro[3].endereco_residencial.cep, "36.356-692");
        strcpy(cadastro[3].telefone_residencial.ddd, "098");
        strcpy(cadastro[3].telefone_residencial.tel, "8245-9622");
        strcpy(cadastro[3].endereco_comercial.rua, "Av Belardino Belo");
        strcpy(cadastro[3].endereco_comercial.num, "362");
        strcpy(cadastro[3].endereco_comercial.compl, "Sala 45");
        strcpy(cadastro[3].endereco_comercial.cidade, "Rosa Branca");
        strcpy(cadastro[3].endereco_comercial.estado, "MT");
        strcpy(cadastro[3].endereco_comercial.cep, "36.356-254");
        strcpy(cadastro[3].telefone_comercial.ddd, "098");
        strcpy(cadastro[3].telefone_comercial.tel, "3226-8665");
        strcpy(cadastro[3].data_ingresso.dia, "27");
        strcpy(cadastro[3].data_ingresso.mes, "10");
        strcpy(cadastro[3].data_ingresso.ano, "2016");
        strcpy(cadastro[3].salario, "RS 3659,02");

        strcpy(cadastro[4].nome, "Joana Freitas");
        strcpy(cadastro[4].id, "51.364.895");
        strcpy(cadastro[4].cpf, "256.945.694-65");
        strcpy(cadastro[4].sexo, "F");
        strcpy(cadastro[4].eCivil, "Viuva");
        strcpy(cadastro[4].data_nascimento.dia, "06");
        strcpy(cadastro[4].data_nascimento.mes, "01");
        strcpy(cadastro[4].data_nascimento.ano, "1984");
        strcpy(cadastro[4].endereco_residencial.rua, "Rua Valdemir Brando");
        strcpy(cadastro[4].endereco_residencial.num, "65");
        strcpy(cadastro[4].endereco_residencial.compl, "Casa");
        strcpy(cadastro[4].endereco_residencial.cidade, "Uberlandia");
        strcpy(cadastro[4].endereco_residencial.estado, "MG");
        strcpy(cadastro[4].endereco_residencial.cep, "38.412-356");
        strcpy(cadastro[4].telefone_residencial.ddd, "034");
        strcpy(cadastro[4].telefone_residencial.tel, "99451-6532");
        strcpy(cadastro[4].endereco_comercial.rua, "Av Mario Atiade");
        strcpy(cadastro[4].endereco_comercial.num, "187");
        strcpy(cadastro[4].endereco_comercial.compl, "Sala 990");
        strcpy(cadastro[4].endereco_comercial.cidade, "Uberlandia");
        strcpy(cadastro[4].endereco_comercial.estado, "MG");
        strcpy(cadastro[4].endereco_comercial.cep, "38.412-641");
        strcpy(cadastro[4].telefone_comercial.ddd, "034");
        strcpy(cadastro[4].telefone_comercial.tel, "3662-1478");
        strcpy(cadastro[4].data_ingresso.dia, "23");
        strcpy(cadastro[4].data_ingresso.mes, "03");
        strcpy(cadastro[4].data_ingresso.ano, "2019");
        strcpy(cadastro[4].salario, "RS 4121,25");
        
        //(b) Funções

        int n, t=5;
        char str[100];

        while (n!=0)
        {      
            printf("\n\n << Cadastr2o de Usuários >> \n\n");
            printf("1 - Listar todos os cadastros\n");
            printf("2 - Cadastrar/Sobrescrever nova pessoa\n");
            printf("3 - Listar as pessoas que nasceram depois de 1990\n");
            printf("4 - Copiar dados de um cadastro para outro\n");
            printf("0 - Sair\n");
            printf("Escolha uma opção: ");
            scanf("%d", &n);

            if(n==1){
                printar(cadastro, t);
            }
            else if(n==2){
                novo(cadastro);
            }
            else if(n==3){
                apos(cadastro, t); 
            }
            else if(n==4){
                copia(cadastro, t);
            }else{
                return 0;
            }

            
        }    
        return 0;
    }
    /*
    1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
    Use as subestruturas dos   exercícios   anteriores para definir os tipos
    dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

    Cadastro
    +------------+---------------------+--------------------------+------------------------+
    | Nome       | enderecoereço comercial* |         Salário          |       Idade            | 
    +------------+---------------------+--------------------------+--------+---------------+
    | CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
    +------------+---------------------+--------------------------+--------+---------------+
    | Sexo       |enderecoereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
    +------------+---------------------+--------------------------+--------+---------------+

    (a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
    fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
    durante o teste do programa.

    (b)Crie um menu com as seguintes opções:
        a.Listar todos os cadastros
        b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
        c.Listar as pessoas que nasceram depois de 1990.
        d.Copiar dados de um cadastro para outro


    -------------------------------------------------------------------------------
    Exemplo de saída:

    =======Exemplo do menu=======

    << Cadastro de Usuários >> 

    1 - Listar todos os cadastros  
    2 - Cadastrar/Sobrescrever nova pessoa  
    3 - Listar as pessoas que nasceram depois de 1990  
    4 - Copiar dados de um cadastro para outro   
    0 - Sair 
    Escolha uma opção: 1

    Lista de usuários cadastrados: 

    Posição: 0 
    Informacoes Pessoais: 
    Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
    Salario: 111111, Identidade:  WE-11.111.111 
    Telefone residencial: (11) 11111-1111 
    Telefone: (11) 91111-1111 
    Data de Nascimento:  1 de janeiro de 262 
    Data de Ingresso: 1 de janeiro de 276 

    enderecoereço comercial: 
    Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
    Estado: WE, CEP: 11111-111 

    enderecoereço residencial: 
    Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
    Estado: WE, CEP: 11111-111 

    Posição: 1 
    Informacoes Pessoais: 
    Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
    Salario: 111111, Identidade:  WE-22.222.222 
    Telefone residencial: (11) 22222-2222 
    Telefone: (11) 92222-2222 
    Data de Nascimento:  2 de fevereiro de 281 
    Data de Ingresso: 2 de fevereiro de 295 

    enderecoereço comercial: 
    Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
    Estado: WE, CEP: 11111-111 

    enderecoereço residencial: 
    Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
    Estado: WE, CEP: 11111-111 

    Posição: 2 
    Informacoes Pessoais: 
    Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
    Salario: 111111, Identidade:  WE-33.333.333 
    Telefone residencial: (11) 11111-1111 
    Telefone: (11) 91111-1111 
    Data de Nascimento:  1 de janeiro de 262 
    Data de Ingresso: 1 de janeiro de 276 

    enderecoereço comercial: 
    Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
    Estado: WE, CEP: 11111-111 

    enderecoereço residencial: 
    Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
    Estado: WE, CEP: 11111-111 

    Posição: 3 
    Informacoes Pessoais: 
    Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
    Salario: 111111, Identidade:  WE-44.444.444 
    Telefone residencial: (11) 22222-2222 
    Telefone: (11) 92222-2222 
    Data de Nascimento:  2 de fevereiro de 283 
    Data de Ingresso: 2 de fevereiro de 295 

    enderecoereço comercial: 
    Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
    Estado: WE, CEP: 11111-111 

    enderecoereço residencial: 
    Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
    Estado: WE, CEP: 11111-111 

    -------------------------------------------------------------------------------
    */