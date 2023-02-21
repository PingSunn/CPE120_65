#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

int main() {
    node *head = NULL;
    node *tail = NULL;
    int countAdd = 0;
    int num, i, countRemove = 0;
    int removeArr[3] = {};
    int input;

    printf("Enter 10 integers: ");

    do {
        scanf("%d", &num);
        node *newNode = (node*)malloc(sizeof(node));
        newNode->data = num;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }

        countAdd++;
    } while (countAdd < 10);

    printf("The linked list is: ");
    node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    } //Print zone

    // Remove part ***********************************************
    printf("\nEnter 3 integers to remove (1-10): ");

    do {
        scanf("%d", &input);
        removeArr[countRemove] = input;
        countRemove++;
    } while (countRemove < 3);

    current = head;
    node *previous = NULL;
    int index = 0;

    while (current != NULL) {
        for (i = 0; i < 3; i++) {
            if (index == removeArr[i]) {
                if (previous == NULL) {
                    head = current->next;
                } else {
                    previous->next = current->next;
                }
                free(current);
                break;
            }
        }
        if (i < 3) {
            countRemove++;
            if (countRemove == 3) {
                break;
            }
            current = previous->next;
        } else {
            previous = current;
            current = current->next;
        }
        index++;
    }

    // printf("\nThe linked list after removing nodes at indices: ");
    // for (i = 0; i < 3; i++) {
    //     printf("%d ", removeArr[i]);
    // }
    printf("\nThe linked list is: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    } //Print zone

    return 0;
}