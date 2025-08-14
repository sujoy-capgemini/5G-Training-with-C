#include <stdio.h>

int main() {
    //Code
    int i;
    printf("%p",&i); //printing address

    int x=10;
    int* ptr=&x;
    printf("\n%d",ptr);
    return 0;
}