#include <stdio.h>
#include <stdlib.h>
// cài đặt dslk lưu trữ các số nguyên
struct Node{
    int data;
    Node* next;
};
void initList1(Node*& head){
    head = NULL;
}
// bổ sung value vào đầu danh sách
void insertBegin1(Node*& head, int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
//cách 2
void initList2(Node** head){
    *head = NULL;
}
// bổ sung value vào đầu danh sách
void insertBegin2(Node** head, int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void hienthi(Node* head){
    if (head == NULL) printf ("\n Danh sach rong");
    else {
        printf ("\n Danh sach chua: ");
        while (head != NULL){
            printf ("%d", head->data);
            head=head->next;
        }
    }
}
int main(){
    Node* list = NULL;
    initList2(&list);
    insertBegin2(&list, 1);
    insertBegin2(&list, 2);
    insertBegin2(&list, 3);
    insertBegin2(&list, 4);
    insertBegin2(&list, 5);
    hienthi(list);
    return 0;
}