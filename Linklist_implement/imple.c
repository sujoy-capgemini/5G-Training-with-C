#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* createNode(int val){
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=val;
    newNode->next=NULL;
    return;
}
void insertAtEnd(Node** head,int val){
    Node *newNode=createNode(val);
    if(*head==NULL){
        *head=newNode;
        return;
    }
    Node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        printf("%d ->",temp->next);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main() {
    //Code
    Node *head=NULL;
    insertAtEnd(&head,10);

    return 0;
}