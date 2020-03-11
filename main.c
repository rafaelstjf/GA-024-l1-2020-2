#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int matriz_identidade(int* mat, int n);
int main(){
    return 0;

}
int matriz_identidade(int* mat, int n){
    /**
     * Percorre a matriz e verifica se é identidade
     */
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < n; j++){
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