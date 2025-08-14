//*Passing by reference swap Value using pointer.
// #include <stdio.h>

// void swap(int* x,int* y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main() {
//     //Code
//     int x=10;
//     int y=20;

//     swap(&x,&y);
//     printf("The swap two x is :%d and y is : %d ",x,y);
//     return 0;
// }

//*Pointer Besic Concepts:
// #include <stdio.h>
// int main() {
//     //Code
//     int x=10;
//     printf("%d\n",x); //10
//     printf("%d\n",&x); //x->106422300
//     int* ptr=&x;
//     printf("%d\n",ptr);//x->106422300
//     printf("%d\n",*ptr);//10
//     return 0;
// }
//*Basic Array Printing
// #include <stdio.h>
// int main() {
//     //Code
//     int n=5;
//     int arr[n];
//     printf("Enter array element :\n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     //print
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//*Printing array using pointer
// #include <stdio.h>

// int main() {
//     //Code
//     int arr[5]={1,2,3,4,5};
//     int *ptr=arr;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         printf("%d ",*(ptr+i));
//     }
//     return 0;
// }

//*string print - length & strcpy
// #include <stdio.h>
// #include <string.h>

// int main() {
//     //Code
//     char str[]="SUJOY GHOSHAL";
//     int n=strlen(str);
//     printf("The length is : %d\n",n);

//     char str2[]="How are You?";
//     strcpy(str,str2);
//     printf("%s\n",str);
//     printf("%s\n",str2);
//     return 0;
// }

//*Print string using pointer
// #include <stdio.h>
// int main() {
//     //Code
//     char str[]="SUJOY";
//     char *p=str;
//     while(*p!='\0'){
//         printf("%c",*p);
//         p++;
//     }
//     return 0;
// }

//*Bubble sort

// #include <stdio.h>
// void bubblesort(int arr[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// int main()
// {
//     // Code
//     int arr[] = {10, 8, 4, 5, 3, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubblesort(arr, n);
//     printArray(arr, n);
//     return 0;
// }


//*strature in c:
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // Code
//     typedef struct Car
//     {
//         int id;
//         float millage;
//         char name[50];
//     } car;
//     car c1;
//     c1.id=10001;
//     c1.millage=1002.333;
//     strcpy(c1.name,"Toyto");

//     printf("Car Id :%d\n",c1.id);
//     printf("Car Milage :%f\n",c1.millage);
//     printf("Car Name :%s\n",c1.name);
//     return 0;
// }



//*starure using Pointer:
// #include <stdio.h>
// #include <string.h>

// typedef struct Student
//     {
//         int roll_no;
//         int age;
//         char name[20];
//     } student;

// int main()
// {
//     // Code
//     student s1;
//     student *ptr;
//     ptr=&s1;

//     //assign value using pointer:
//     ptr->roll_no=2111981196;
//     ptr->age=22;
//     strcpy(ptr->name,"Sujoy Ghoshal");

//     //print value using pointer:
//     printf("Student info using Pointer\n");
//     printf("Roll No : %d\n",ptr->roll_no);
//     printf("Age : %d\n",ptr->age);
//     printf("Name : %s\n",ptr->name);

//     //modify vallue
//     s1.age=23;

//     printf("[......Modify student info using Pointer......]\n");
//     printf("Roll No : %d\n",ptr->roll_no);
//     printf("Age : %d\n",ptr->age);
//     printf("Name : %s\n",ptr->name);
    
//     return 0;
// }

//*Struture using pointer

// #include <stdio.h>
// #include <string.h>

// typedef struct Car{
//     int id;
//     float milage;
//     char name[20];
// }car;

// int main() {
//     //Code
//     car c1={2111,230.4500,"Toyta"};
//     car *ptr=&c1;

//     printf("Car id : %d\n",ptr->id);
//     printf("Car Milage : %2f\n",ptr->milage);
//     printf("Car name : %s\n",ptr->name);

//     //Update:
//     c1.id=6789;
//     printf("Update car id : %d\n",ptr->id);
//     return 0;
// }


