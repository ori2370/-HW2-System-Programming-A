#include "my_mat.h"
#include <stdio.h>

int main(){
    int mat[10][10];
    char input = 'a';
    while(input != 'D'){
        scanf("%c", &input);
        switch (input)
        {
        case 'A':
            createMat(mat);
            break;

        case 'B':
            isPath(mat);
            break;

        case 'C':
            shortestP(mat);
            break;
        
        default:
            break;
        }

    }
return 0;
}
