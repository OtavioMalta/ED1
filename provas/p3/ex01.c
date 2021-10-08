/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente 
encadeada de alunos (a lista usada na prática 16 – copiar o código 
da SUA PRÁTICA)

Implemente no TAD a função  int list_erase_max_nota_n1(TDLinkedList *li), que 
retira da  lista todos os alunos que possuem a maior nota na primeira prova
(elemento n1 da struct aluno; note que mais de um aluno pode possuir 
a nota máxima). Pode-se utilizar qualquer função já implementada na
lista (que estão no .h)


*/

int list_erase_max_nota_n1(TDLinkedList *li){
    if(li == NULL){return -1;}

    DLNode *curr;
    int maior = 0, temp;
    curr = li->begin;
    int i = 1;

    while(curr!=NULL){
        if(curr->data.n1 >= maior){
            maior = curr->data.n1;
        }
        curr = curr->next;
    }

    curr = li->begin;
    while(curr!=NULL){
        if(curr->data.n1 == maior){
            temp = list_erase(li,i);
            if(temp!=0){return 1;}
            i--;
        }else if(curr->data.n1 > maior){
            return -1;
        }
        curr = curr->next;
        i++;
    }

    return 0;
}
