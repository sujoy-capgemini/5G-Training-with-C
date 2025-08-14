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
int inserAtEnd(Node **head,int val){
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

    inserAtEnd(&head,10);
    inserAtEnd(&head,20);
    inserAtEnd(&head,30);
    inserAtEnd(&head,40);
    inserAtEnd(&head,50);
    
    printList(head);

    return 0;
}