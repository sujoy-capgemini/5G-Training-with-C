#include <stdio.h>

int main() {
    //Code
    int n=10;
    int *ptr=&n;
    printf("The pointer address %d\n",ptr);
    printf("The pointer value %d\n",*ptr);
    printf("The pointer value %p\n",ptr);
    return 0;
}

