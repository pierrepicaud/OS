#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Du Tham Lieu
// Group 3
// Singly Linked List
typedef struct node{
    int value;
    struct node* next
} NODE;

void print_list(NODE *head) {
    while (head != NULL) {
        printf("%d ", head->value);
        head = head->next;
    }
    printf("\n");
}

void insert_node(NODE **head, int val) {
    // Insert to head;
    NODE *new_node = malloc(sizeof(NODE));
    new_node->value = val;
    new_node->next = *head;
    *head = new_node;
}

void delete_node(NODE **head, int value) {
    // Delete the fisrt occurence of val in list
    NODE *prev;
    prev = *head;

    if ((*head) == NULL)
        return;
    if ((*head)->value == value) {
        *head = (*head)->next;
        free(prev);
        return;
    }

    while (prev->next != NULL && prev->next->value != value) {
        prev = prev->next;
    }
    if (prev->next != NULL) {
        NODE*del = prev->next;
        prev->next = del->next;
        free(del);
    }
}
int main() {
    NODE* head = NULL;
    // Testing solution

    /*head = (NODE *)malloc(sizeof(NODE));
    head->value = 24;
    head->next = (NODE *) malloc(sizeof(NODE));
    head->next->value = 02;
    head->next->next = NULL;*/

    // Demonstration
    insert_node(&head, 1995);
    insert_node(&head, 1996);
    insert_node(&head, 1997);
    insert_node(&head, 1998);
    insert_node(&head, 1999);
    delete_node(&head, 1997);
    delete_node(&head, 1996);
    delete_node(&head, 1998);
    print_list(head);
    return 0;
}

