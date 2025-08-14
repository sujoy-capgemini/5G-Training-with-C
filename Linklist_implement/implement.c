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
   return newNode;
}

void inserAtEnd(Node **head,int val){
     Node* newNode=createNode(val);
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

void print_List(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
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

    print_List(head);

    return 0;
}