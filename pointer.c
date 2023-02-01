#include <stdio.h>

// int main() {
//     int x, *ptr;
//     x = 250;
//     ptr = &x;

//     printf("%x\n", ptr);
//     printf("%d\n", *ptr);
//     return 0;
// }

int main() {
    int a[10], *prt, i;
    prt = a;
    for (i = 0; i < 10; i++) {
        *prt++ = i+1;
    }
    // prt = a;
    for (i = 0; i < 10; i++) {
        printf("a = %d \n", *prt++);
    }
    return 0;
}

// int main() {

//     struct personal_data
//     {
//         short int age;
//     };
//     struct personal_data person[20], *p[20];
//     return 0;
// }

int main() {
    int *a_p[4];
    int a[10] = {93, 5, 26, 1, 90, 7, 54, 8};
    int a[10] = {93, 5, 26, 1, 90, 7, 54, 8};
    int a[10] = {93, 5, 26, 1, 90, 7, 54, 8};
    int a[10] = {93, 5, 26, 1, 90, 7, 54, 8};


    return 0;
}