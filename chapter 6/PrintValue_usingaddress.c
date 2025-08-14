#include <stdio.h>

int main() {
    //Code
    // int x=10;
    // int* ptr=&x;
    // printf("%d",*ptr); //*print value using pointer.


    int x=10;
    int* ptr=&x;
    printf("%d\n",x);
    printf("%p\n",ptr);
    printf("%d\n",*ptr); //go to the current address and get the value and print it.
    return 0;
}