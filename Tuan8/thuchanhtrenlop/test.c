#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    Node* next;
};

void insertBefore(Node** head, Node* p, int value) {
    if (p == NULL || head == NULL) return;

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    Node* ptr = *head;
    while (ptr->next != p) {
        ptr = ptr->next;
    }
    newNode->next = p;
    ptr->next = newNode;
}