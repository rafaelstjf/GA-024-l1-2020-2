#ifndef MATRIZES_H
#define MATRIZES_H
#include <stdio.h>
#include <stdlib.h>
    int matriz_identidade(int* mat, int n);
    int matriz_identidade(int** mat, int n);
    int triangular_superior(int* mat, int n);
    int triangular_superior(int** mat, int n);
    int tridiagonal(int* mat, int n);
    int tridiagonal(int** mat, int n);
    float produto_diagonal(float* mat, int n);
    float produto_diagonal(float** mat, int n);

#endif