// #include <stdio.h>
// #include <string.h>

// //Define a strature:
// typedef struct Student{
//     char name[50];
//     int roll;
//     float marks;
// }Student;


// int main() {
//     Student s1;
//     strcpy(s1.name,"Sujoy");
//     s1.roll=1222;
//     s1.marks=13.3;
    
//     printf("My name is : %s",s1.name);
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     //Code
//     int x=10;
//     int *ptr=&x;
//     printf(" x address :%d\n",ptr);

//     int **ptr2=&ptr; //double pointer :
//     printf("ptr2  address :%d\n",ptr2);

//     return 0;
// }





#include <stdio.h>

typedef struct Cal{
    int x;
    int y;
}Cal;

int add(Cal *ptr){
    int x=ptr->x;
    int y=ptr->y;
    int ans=(x+y);
    return ans;
}

int main() {
    //Code
    Cal c;
    Cal *ptr=&c;
    printf("Enter 1 Number :");
    scanf("%d",&ptr->x);

    printf("Enter 2 Number :");
    scanf("%d",&ptr->y);

    int result=add(ptr);
    printf("Addision : %d",result);
    return 0;
}