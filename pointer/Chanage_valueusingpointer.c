#include <stdio.h>

int main() {
    //Code
    int x=20;
    int* ptr=&x;
    

    printf("x value is : %d\n",x);
    printf("x address is : %d\n",&x);
    *ptr=50;
    printf("x update value is : %d\n",x);
    printf("x address is : %d",&x);
    return 0;
}