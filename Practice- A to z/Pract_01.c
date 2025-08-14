//*Strature with pointer
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// typedef struct Car{
//   char car_name[100];
//   float car_speed;
//   int car_price;
// }Car;


// int Update_carspeed(Car *ptr){
//     ptr->car_speed=56.4546;
//     return ptr->car_speed;
// }

// int main() {
//     Car c1;
//     //Car *ptr=&c1;
//     Car *ptr=(Car *)malloc(sizeof(Car));
//     strcpy(ptr->car_name,"Toyta");
//     ptr->car_speed=45.876;
//     ptr->car_price=5000000;


//     printf("Car Name : %s\n",ptr->car_name);
//     printf("Car Speed : %.2f\n",ptr->car_speed);
//     printf("Car Name : %d\n",ptr->car_price);

//     float new_speed=Update_carspeed(ptr);
//     printf("Update Car Speed : %.2f\n",new_speed);

//     return 0;
// }



//*Linklist implement 
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node{
//     int data;
//     struct Node *next;
// }Node;

// Node *createNode(int val){
//    Node *newNode=(Node *)malloc(sizeof(Node));
//    newNode->data=val;
//    newNode->next=NULL;
//    return newNode;
// }
// void insertAtEnd(Node **head,int val){
//     Node *newNode=createNode(val);
//     if(*head==NULL){
//         *head=newNode;
//         return;
//     }
//     Node *temp=*head;
//     while(temp->next!=NULL){
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



//*Queue implement:

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
    int size;
    int Front;
    int Rear;
    int *arr;
}Queue;

int isFull(Queue *q){
    return q->Rear==q->size-1;
}
int isEmpty(Queue *q){
    return q->Front==q->Rear;
}
void enqueue(Queue *q,int val){
  if(isFull(q)){
    printf("Queue is full\n");
  }
  else{
    q->Rear=q->Rear+1;
    q->arr[q->Rear]=val;
    printf("Enqueued : %d\n",val);
    printf("----------------------\n");
  }
}

void dequeue(Queue *q){
    int x=-1;
    if(isEmpty(q)){
    printf("Queue is Empty\n");
    }
    else{
        q->Front++;
        x=q->arr[q->Front];
        printf("Dequeued : %d\n",x);
        printf("----------------------\n");
    }
}

void print_queue(Queue *q){
    if(isEmpty(q)){
    printf("Queue is Empty\n");
     printf("----------------------\n");
    }
    else{
        printf("Queue Element\n");
        for(int i=q->Front+1;i<=q->Rear;i++){
            printf("%d ",q->arr[i]);
        }
        printf("\n");
        printf("----------------------\n");
    }
}

int main() {
    //Code
    Queue q;
    q.size=100;
    q.Front=-1;
    q.Rear=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    

    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);

    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);


    print_queue(&q);
    return 0;
}