#include <stdio.h>

int main() {
    int *a_p[4], i, j;
    int a[10] = {93, 5, 26, 1, 90, 7, 54, 8};
    int b[10] = {23, 50, 6, 1, 9, 67, 4, 48};
    int c[10] = {13, 75, 6, 16, 29, 7, 4, 81};
    int d[10] = {32, 5, 64, 71, 59, 7, 44, 8};

    a_p[0] = a;
    a_p[1] = b;
    a_p[2] = c;
    a_p[3] = d;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("a_p[%d, %d] = %d \n", i, j, *a_p[i]++);
        }
        printf("--- XxXxXxXxX --- \n");
    }
    return 0;
}