#include "estruturas.h"

Lista* insere_ord(Lista* l, char* nome, int matricula, char turma, float p1, float p2, float p3){
    Lista* n = (Lista*)malloc(sizeof(Lista));
    for(unsigned int i = 0; i < 81; i++){
        n->nome[i] = nome[i];
        if(nome[i]=='\0') break;
    }
    n->matricula = matricula;
    n->turma = turma;
    n->p1 = p1;
    n->p2 = p2;
    n->p3 = p3;
    n->prox = NULL;
    if(!l){ //lista vazia
        return n;
    }else{
        Lista* ant = NULL; //no anterior
        Lista* it = l;
        float media_novo = (p1 + p2 + p3)/3;
        while(it != NULL && (float)(it->p1 + it->p2 + it->p3)/3 < media_novo){
            ant = it;
            it = it->prox;
        }
        if(it==NULL){//chegou no final
            it->prox = n;
        }else{
            ant->prox = n;
            n->prox = it;
        }
        return l;
    }
}
Lista* retira(Lista* l, int matricula){
    if(!l){
        return NULL;
    }else{
        Lista* it = l;
        Lista* ant = NULL;
        while(it!= NULL && it->matricula != matricula){
            ant = it;
            it = it->prox;
        }
        if(!it){
            return l; //aluno nao esta na lista
        }else{
            if(ant){ //aluno esta no meio de outros
                ant->prox = it->prox;
                free(it);
                return l;
            }else{ //aluno esta no inicio da lista
                ant = it->prox;
                free(it);
                return ant;
            }
        }
    }
}
Lista* copia(Lista* l){
    Lista* n_ant = NULL;
    Lista* n_cabeca = NULL;
    Lista* n = NULL;
    Lista* it = l;
    while(it != NULL){
            n = (Lista*)malloc(sizeof(Lista));
            for(int i = 0; i < 84; i++){
                n->nome[i] = it->nome[i];
                if(it->nome[i]=='\0') break;
            }
            n->matricula = it->matricula;
            n->turma = it->turma;
            n->p1 = it->p1;
            n->p2 = it->p2;
            n->p3 = it->p3;
            n->prox = NULL;
        if(!n_cabeca){
            n_ant = n;
            n_cabeca = n;
        }else{
            n_ant->prox = n;
            n_ant = n;
        }
    }
    return n_cabeca;
}
void imprime_lista(Lista* l){
    Lista* it = l;
    while(it!=NULL){
        printf("Nome: %s\tMatricula: %d\tTurma: %c\n", it->nome, it->matricula, it->turma);
        printf("\tNotas:\n\t\tP1: %f\n\t\tP2: %f\n\t\tP3: %f\n", it->p1, it->p2, it->p3);
        it = it->prox;
    }
}