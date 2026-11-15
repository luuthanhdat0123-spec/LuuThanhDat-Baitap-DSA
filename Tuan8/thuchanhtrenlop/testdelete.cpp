#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node* next;
};

void deleteNode(Node** head, Node* del) {
    if (head == NULL || del == NULL) return;

    if (*head == del) {
        *head = del->next;
    } else {
        Node* temp = *head;
        while (temp != NULL && temp->next != del) {
            temp = temp->next;
        }
        if (temp != NULL) {
            temp->next = del->next;
        }
    }
    free(del);
}
