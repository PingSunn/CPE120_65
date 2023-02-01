#include <stdio.h>
#define col 13
#define row 13


int main() {
    int Array2d[row][col];
    int i, j, result;
    for (i = 2; i < row; i++) {
        for(j = 2; j < col; j++) {
            result = i * j;
            printf("%d ", result);
        }
        printf("\n");
    }
    return 0;
}