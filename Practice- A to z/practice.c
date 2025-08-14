// #include <stdio.h>

// int main() {
//     //Code
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         printf("arr[%d] : %d\n",i,arr[i]);
//     }
//     return 0;
// }


//*Array pointer :
// #include <stdio.h>

// int main() {
//     //Code
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int *ptr=arr;
//     for(int i=0;i<n;i++){
//         printf("arr[%d] : %d\n",i,*(ptr+i));
//     }
//     return 0;
// }



//*String Basic :
// #include <stdio.h>
// #include <string.h>
// int main() {
//     //Code
//     char str[]="SUJOY GHOSHAL";
//     int n=strlen(str);
//     printf("%s\n",str);
//     printf("The length is : %d",n);
//     return 0;
// }



//*Pointer string printing :

// #include <stdio.h>
// #include <string.h>
// int main() {
//     //Code
//     char str[]="SUJOY GHOSHAL";
//     char *ptr=str;
//     while(*ptr!='\0'){
//         printf("%c",*ptr);
//         ptr++;
//     }
//     return 0;
// }




//*Strature :
// #include <stdio.h>
// #include <string.h>

// typedef struct Student{
//     int std_id;
//     float std_marks;
//     char std_name[50];
// }student;

// int main() {
//     //Code
//     student s1;
//     student s2;

//     s1.std_id=2111981196;
//     s1.std_marks=89.78;
//     strcpy(s1.std_name,"SUJOY");



//     //*update marks:
//     s1.std_marks=60.60;

//     printf("Student id : %d\n",s1.std_id);
//     printf("Student marks : %.2f\n",s1.std_marks);
//     printf("Student name : %s\n",s1.std_name);
//     return 0;
// }



//*strauct with pointer:
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct Student{
//     int std_id;
//     float std_marks;
//     char std_name[50];
// }student;

// void update_marks(student *s,float new_marks){
//     s->std_marks=new_marks;
// }

// int main() {
//     //Code
//     // student s1;
//     // student s2;

//     // student *ptr=&s1; //Pointer allocate:
//     student *ptr=(student *)malloc(sizeof(student));

//     if(ptr==NULL){
//         printf("Memory allocation faild\n");
//         return 1;
//     }

//     ptr->std_id=2111981196;
//     ptr->std_marks=89.78;
//     strcpy(ptr->std_name,"SUJOY");

//     //updating marks:
//     //ptr->std_marks=98.70;
//     update_marks(ptr,80.60);

//     //printing
//     printf("Student id : %d\n",ptr->std_id);
//     printf("Student update_marks : %.2f\n",ptr->std_marks);
//     printf("Student name : %s\n",ptr->std_name);

//     free(ptr);
//     return 0;
// }





//*pass by value:
//In pass by value, a copy of the actual variable is passed to the function. 
//do not affect the original variable.

// #include <stdio.h>

// void change(int a){
//     a=30;
//     printf("Inside function a : %d\n",a);
// }
// int main() {
//     //Code
//     int a=10;
//     change(a);
//     printf("The value of a : %d\n",a);
//     return 0;
// }




//*Pass by refernece:
//In pass by reference, the address of the variable is passed to the function
//change the original varibale

// #include <stdio.h>

// void change(int *p){
//   *p=100;
// }

// int main() {
//     //Code
//     int a=10;
//     int *ptr=&a;
//     change(ptr);
//     printf("a -> %d",a);
//     return 0;
// }