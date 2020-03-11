#include "matrizes.h"

int matriz_identidade(int* mat, int n){
    /**
     * Converter a matriz para representacao linear 
     * (mat[ i ][ j ] mapeado em v[ k ] onde k = i * n + j)
     * e verificar se eh identidade
     */
    unsigned int index = 0;
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            for(unsigned int j = 0; j < n; j++){
                index = i * n + j;
                if(i==j){
                    if(mat[index] > 1 || mat[index] < 1){
                        return 0;
                    }
                }else if(mat[index] > 0 || mat[index] < 0)
                    return 0;
            }
        }
        return 1;
    }else return 0;
}
int matriz_identidade(int** mat, int n){
    /**
     * Percorre a matriz e verifica se é identidade
     */
    if(mat){
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 1; j < n; j++){
            if(i==j){
                if(mat[i][j] > 1 || mat[i][j] < 1){
                    return 0;
                }
            }else if(mat[i][j] > 0 || mat[i][j] < 0)
                return 0;
        }
    }
    return 1;
    }
    else return 0;
}
int triangular_superior(int* mat, int n){
    /**
     * Utiliza 1 if para verificar a se estah na parte superior e a parte inferior da matriz
     */
    unsigned int index = 0;
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            for(unsigned int j = 0; j < n; j++){
                index = i * n + j;
                if(i >= j){
                    if(mat[index] == 0)
                        return 0;
                }else{
                    if(mat[index] > 0 || mat[index] < 0)
                        return 0;
                }
            }
        }
        return 1;
    }else return 0;
}
int triangular_superior(int** mat, int n){
    /**
     * Verifica se i > j
     */
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            for(unsigned int j = 0; j < n; j++){
                if(i >= j){
                    if(mat[i][j] == 0)
                        return 0;
                }else{
                    if(mat[i][j] > 0 || mat[i][j] < 0)
                        return 0;
                }
            }
        }
        return 1;
    }else return 0;
}
int tridiagonal (int* mat, int n){
    unsigned int index;
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            for(unsigned int j = 0; j < n; j++){
                index = i*n + j;
                if(i == j || i == (j + 1) || i == (j-1)){
                    if(mat[index] == 0)
                        return 0;
                }else if(mat[index]> 0 || mat[index] < 0)
                    return 0;
            }
        }
        return 1;
    }else return 0;
}
int tridiagonal(int** mat, int n){
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            for(unsigned int j = 0; j < n; j++){
                if(i == j || i == (j + 1) || i == (j-1)){
                    if(mat[i][j] == 0)
                        return 0;
                }else if(mat[i][j]> 0 || mat[i][j] < 0)
                    return 0;
            }
        }
        return 1;
    }else return 0;
}
float produto_diagonal(float* mat, int n){
    unsigned int index;
    float produto = 1.0;
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            index = i*(n + 1);
            produto*=mat[i];
        }
    }else produto = 0.0;
    return produto;
}
float produto_diagonal(float** mat, int n){
    float produto = 1.0;
    if(mat){
        for(unsigned int i = 0; i < n; i++){
            produto*=mat[i][i];
        }
    }else produto = 0.0;
    return produto;
}
float soma_inferior(float* mat, int n){
    unsigned int index;
    float soma = 0.0;
    if(mat){
        for(int i = 1; i<n; i++){
            for(int j = 0; j < i; j++){
                index = i*n + j;
                soma+=mat[index];
            }
        }
    }
    return soma;
}
float soma_inferior(float** mat, int n){
    float soma = 0.0;
    if(mat){
        for(int i = 1; i<n; i++){
            for(int j = 0; j < i; j++){
                soma+=mat[i][j];
            }
        }
    }
    return soma;
}