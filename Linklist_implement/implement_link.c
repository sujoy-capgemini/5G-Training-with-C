#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node* creteNode(int val) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insert_AtEnd(Node **head, int val) {
    Node *newNode = creteNode(val);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;  
}


void print_List(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    Node *head = NULL;

    insert_AtEnd(&head, 10);
    insert_AtEnd(&head, 20);
    insert_AtEnd(&head, 30);
    insert_AtEnd(&head, 40);

    print_List(head);

    

    return 0;
}
