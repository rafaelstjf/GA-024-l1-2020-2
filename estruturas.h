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
#endif