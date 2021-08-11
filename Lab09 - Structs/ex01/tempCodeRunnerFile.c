printf("<< Telefone >>\n");
    struct telefone telefones[4];
    for(int i = 1; i <=3; i++){
        printf("Digite o DDD: ");
        scanf("%d", &telefones[i].ddd);
        printf("Digite o telefone: ");
        scanf("%d", &telefones[i].num);
    }

    for(int p = 1; p <= 3; p++){
        printf("%d %d\n",telefones[p].ddd,telefones[p].num);
    }

    return 0;