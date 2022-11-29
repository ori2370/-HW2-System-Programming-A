#include "my_mat.h"
#include <stdio.h>
#define INFINITY 1111

int createMat(int mat[10][10]){
    int num;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    return 0;
}

int isPath(int mat[10][10]){
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    if(mat[i][j] == 0){
        printf("False\n");
        return 1;}
    printf("True\n");
    return 0;
}
int shortestP(int mat[10][10]){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a==b){printf("-1\n");
             return 0;}
//no path
  int shortMat[10][10], i, j, k;
  for (i = 0; i < 10; i++){
    for (j = 0; j < 10; j++){
        if(i != j && mat[i][j]==0){
            shortMat[i][j]= INFINITY;
        }else
      shortMat[i][j] = mat[i][j];
    }
  }

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      for (k = 0; k < 10; k++) {
        if (shortMat[j][k]>shortMat[j][i] + shortMat[i][k]){
          shortMat[j][k] = shortMat[j][i] + shortMat[i][k];}
      }
    }
  }
   if(shortMat[a][b]== INFINITY){
    printf("-1\n");
    }else{
    printf("%d\n",shortMat[a][b]);}
    return 0;}
