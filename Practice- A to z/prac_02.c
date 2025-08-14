// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Node{
//     int data;
//     struct Node *next;
// }Node;

// Node* createNode(int val){
//     Node *newNode=(Node *)malloc(sizeof(Node));
//     newNode->data=val;
//     newNode->next=NULL;
//     return newNode;
// }

// int insertAtEnd(Node **head,int val){
//     Node *newNode=createNode(val);
//     if(*head==NULL){
//         *head=newNode;
//         //return;
//     }
//     Node *temp=*head;
//     if(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newNode;
// }

// void print_List(Node *head){
//     Node *temp=head;
//     while(temp!=NULL){
//         printf("%d -> ",temp->data);
//         temp=temp->next;
//     }
//     printf("NULL\n");
// }


// int main() {
//     //Code
//     Node *head=NULL;

//     insertAtEnd(&head,10);
//     insertAtEnd(&head,20);
//     insertAtEnd(&head,30);
//     insertAtEnd(&head,40);

//     print_List(head);
//     return 0;
// }



// #include <stdio.h>

// typedef struct Cal{
//     int x;
//     int y;
// }Cal;

// int add(Cal *ptr){
//     int x=ptr->x;
//     int y=ptr->y;
//     int ans=(x+y);
//     return ans;
// }

// int main() {
//     //Code
//     Cal c;
//     Cal *ptr=&c;
//     printf("Enter 1 Number :");
//     scanf("%d",&ptr->x);

//     printf("Enter 2 Number :");
//     scanf("%d",&ptr->y);

//     int result=add(ptr);
//     printf("Addision : %d",result);
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Cal{
//     int x;
//     int y;
// }Cal;
// int add(Cal *ptr){
//     int x=ptr->x;
//     int y=ptr->y;
//     int ans=x+y;
//     return ans;
// }
// int main() {
//     //Code
//     Cal c1;
//     Cal *ptr=(Cal *)malloc(sizeof(Cal));
//     printf("Enter 1 Number :");
//     scanf("%d",&ptr->x);

//     printf("Enter 2 Number :\n");
//     scanf("%d",&ptr->y);
    
//     int ans=add(ptr);
//     printf("Addission: %d",ans);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *createNode(int val){
     Node *newNode=(Node *)malloc(sizeof(Node));
     newNode->data=val;
     newNode->next=NULL;
     return newNode;
}


void insertAtEnd(Node **head, int val) {
    Node *newNode = createNode(val);
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


void print_List(Node *head){
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

    print_List(head);
    return 0;
}