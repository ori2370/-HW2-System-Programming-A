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
            int x = createMat(mat);
            break;

        case 'B':
            int y = isPath(mat);
            break;

        case 'C':
            int z = shortestP(mat);
            break;
        
        default:
            break;
        }

    }
return 0;
}
