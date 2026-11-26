
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;
    int n, i, value;

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

    printf("Enter value to insert: ");
    scanf("%d", &value);

    newnode = malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    printf("Updated List: ");

    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
