#include "my_mat.h"
#include <stdio.h>

int createMat(int mat[10][10]){
    int num;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    return 1;
}

int isPath(int mat[10][10]){
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    if(mat[i][j] == 0){
        printf("False");
        return 1;}
    printf("True");
    return 1;
}

int shortestP(int mat[10][10]){
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    
}

int main(){
    int num = (int)'B';
    printf("%d" ,num);
    return 0;
}