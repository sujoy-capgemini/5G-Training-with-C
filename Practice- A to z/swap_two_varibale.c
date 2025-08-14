//Passing by value 
// #include <stdio.h>
// void swap(int x,int y){
//     int temp=x;
//     x=y;
//     y=temp;
//     printf("x -> %d and y -> %d",x,y);
// }
// int main() {
//     //Code
//     int x=10;
//     int y=20;
//     swap(x,y);
//     return 0;
// }

//*passing by Value :

// #include <stdio.h>
// void change(int x){
//     x=100;
// }
// int main() {
//     //Code
//     int x=10;
//     change(x);
//     printf("The value of x is %d",x);
//     return 0;
// }



//*Passing By referance :

// #include <stdio.h>
// void swap(int *x,int *y){
//      int temp=*x;
//      *x=*y;
//      *y=temp;
// }
// int main() {
//     //Code
//     int x=10;
//     int y=20;
//     int *ptr1=&x;
//     int *ptr2=&y;
//     swap(&x,&y);
//     printf("x -> %d and y -> %d",x,y);
//     return 0;
// }


#include <stdio.h>

void change(int *x){
    *x=200;
}
int main() {
    //Code
    int x=10;
    change(&x);
    printf("The value of x : %d",x);
    return 0;
}