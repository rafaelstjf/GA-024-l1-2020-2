#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int matriz_identidade(int* mat, int n);
int matriz_identidade(int** mat, int n);
int triangular_superior (int* mat, int n);
int triangular_superior (int** mat, int n);
int main(){
    return 0;

}
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
int triangular_superior (int* mat, int n){
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
int triangular_superior (int** mat, int n){
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