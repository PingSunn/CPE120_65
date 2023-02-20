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
        node *new_node = (node*)malloc(sizeof(node));
        new_node->data = num;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }

        countAdd++;
    } while (countAdd < 10);

    printf("The linked list is: ");
    node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    // Remove part ***********************************************
    printf("\nEnter 3 integers to remove: ");
    do {
        scanf("%d", &input);
        removeArr[countRemove] = input;
        countRemove++;
    } while (countRemove < 3);

    current = head;
    node *prev = NULL;
    int index = 0;

    while (current != NULL) {
        for (i = 0; i < 3; i++) {
            if (index == removeArr[i]) {
                if (prev == NULL) {
                    head = current->next;
                } else {
                    prev->next = current->next;
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
            current = prev->next;
        } else {
            prev = current;
            current = current->next;
        }
        index++;
    }

    printf("\nThe linked list after removing nodes at indices: ");
    for (i = 0; i < 3; i++) {
        printf("%d ", removeArr[i]);
    }
    printf("\nThe linked list is: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    return 0;
}
