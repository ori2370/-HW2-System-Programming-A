#include "my_mat.h"
#include <stdio.h>
#define INFINITY 1111
#define MSIZE 10

int createMat(int mat[MSIZE][MSIZE]){
    int num;
    for(int i = 0; i < MSIZE; i++){
        for(int j = 0; j < MSIZE; j++){
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    return 0;
}

int shortestP(int mat[MSIZE][MSIZE]){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a==b){printf("-1\n");
             return -1;}
//no path
  int shortMat[MSIZE][MSIZE], i, j;
  for (i = 0; i < MSIZE; i++){
    for (j = 0; j < MSIZE; j++){
        if(i != j && mat[i][j]==0){
            shortMat[i][j]= INFINITY;
        }else
      shortMat[i][j] = mat[i][j];
    }
  }

  for (i = 0; i < MSIZE; i++) {
    for (j = 0; j < MSIZE; j++) {
      for (int k = 0; k < MSIZE; k++) {
        if (shortMat[j][k]>shortMat[j][i] + shortMat[i][k]){
          shortMat[j][k] = shortMat[j][i] + shortMat[i][k];}
      }
    }
  }
   if(shortMat[a][b]== INFINITY){
    printf("-1\n");
    return -1;
    }else{
    printf("%d\n",shortMat[a][b]);}
    return 0;}

int isPath(int mat[MSIZE][MSIZE]){
    int x=shortestP(mat);
    if(x== -1){
        printf("False\n");
        return 0;
    }
    printf("True\n");
    return 0;
}

