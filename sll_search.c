
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, key, position = 1;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = malloc(sizeof(struct node));

        if (newnode == NULL) {
            printf("Memory allocation failed");
            return 1;
        }

        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
        } else {
            temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;

    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element found at position %d", position);
            return 0;
        }

        temp = temp->next;
        position++;
    }

    printf("Element not found");

    return 0;
}
