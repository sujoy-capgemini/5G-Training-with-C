#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *creteNode(int val){
    Node *newNode=(Node *)malloc(sizeof(Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}

int insertAtEnd(Node **head,int val){
    Node *newNode=creteNode(val);
    if(*head==NULL){
       *head=newNode;
        return 0;
    }
    Node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void printList(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main() {
    //Code
    Node *head=NULL;
    insertAtEnd(&head,10);
    insertAtEnd(&head,20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,40);
    insertAtEnd(&head,50);
    insertAtEnd(&head,60);

    printList(head);

    return 0;
}


