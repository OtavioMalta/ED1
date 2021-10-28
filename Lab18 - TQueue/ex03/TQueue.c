#include<stdlib.h>
#include"TQueue.h"
#include <math.h>
struct  TQueue{
    int front;
    int rear;
    int qt;
    int Isz;
    int Asz;
    aluno *data;
};

TQueue *queue_create(int n){
    TQueue *q;

    q = malloc (sizeof(TQueue));

    if(q!=NULL){
        q->front = 0;
        q->rear = 0;
        q->qt=0;
        q->Isz = n;
        q->Asz = n;
        q->data = malloc(n*sizeof(aluno));
    }
    return q;
}

int queue_free(TQueue *q){
    if(q==NULL){return INVALID_NULL_POINTER;}
    
    free(q->data);
    free(q);

    return SUCCESS;
    
}

int queue_increase(TQueue *q){
    if(q==NULL){return INVALID_NULL_POINTER;}
    
    q->data=realloc(q->data, (q->Asz+q->Isz)*sizeof(aluno));
    q->Isz+=q->Isz;

    return SUCCESS;

}

int queue_compact(TQueue *q){
    if(q==NULL){return INVALID_NULL_POINTER;}
    
    int comp;
    comp=ceil((q->qt)/(float)q->Isz)*q->Isz;
    q->data=realloc(q->data, comp*sizeof(aluno));
    q->Asz=comp;
    return SUCCESS;
    
}


int queue_push(TQueue *q, aluno a){
    if(q==NULL){return INVALID_NULL_POINTER;}

    if(q->qt==q->Asz){
        queue_increase(q);
    }
        q->data[q->rear]=a;
        q->rear=(q->rear+1)%q->Asz;
        q->qt++;

        return SUCCESS;
    
}

int queue_pop(TQueue *q){
    if(q==NULL){return INVALID_NULL_POINTER;}
    if(q->qt==0){return ELEM_NOT_FOUND;}

    q->front=(q->front+1)%q->Asz;
    q->qt--;

    return SUCCESS;
    
}

int queue_consult(TQueue *q, struct aluno *a){
    if(q==NULL){return INVALID_NULL_POINTER;}
    if(q->rear==0){return ELEM_NOT_FOUND;}
    
    *a=q->data[q->front];

    return SUCCESS;
    
}

