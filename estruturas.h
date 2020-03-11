#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H
#include <stdio.h>
#include <stdlib.h>

struct lista {
    char nome[81];
    int matricula;
    char turma;
    float p1;
    float p2;
    float p3;
    struct lista* prox;
};
typedef struct lista Lista;
Lista* insere_ord(Lista* l, char* nome, int matricula, char turma, float p1, float p2, float p3);
Lista* retira(Lista* l, int matricula);
Lista* copia(Lista* l);
void imprime_lista(Lista* l);
/**
 * parte de pilhas e filas
 * typedef struct pilha Pilha;
 * Pilha* cria(void);
 * void push (Pilha* p, float v);
 * float pop (Pilha* p);
 * int vazia (Pilha* p);
 * void libera (Pilha* p);
 * ********* 1 *************
    void concatena_pilhas (Pilha* p1, Pilha* p2){
        if(p2 && p2->vazia() == 0){
            if(!p1) p1 = cria();
            concatena(push(p1, pop(p2), p2);

        }else{
            libera(p2);
        }
    }
* ********** 2 *************
* typedef struct fila Fila;
* Fila* cria(void);
* void insere (Fila* f, float v);
* float retira (Fila* f);
* int vazia (Fila* f);
* void libera (Fila* f);
    void combina_filas(Fila* f_res, Fila* f1, Fila* f2){
        unsigned int turno = 0;
        if(!f_res){
            f_res = cria();
        }
        while(vazia(f1) == 0 && vazia(f2) == 0){
            if(turno == 0 && vazia(f1) == 0){
                insere(f_res, retira(f1));
                if(vazia(f2) == 0)
                    turno = 1;
            }else if(turno > 0 && vazia(f2) == 0){
                insere(f_res, retira(f1));
                if(vazia(f1) == 0)
                    turno = 0;
            }
        libera(f1);
        libera(f2);
        }
    }
 */

#endif