#include <stdio.h>
void  swap(int* x,int* y){
    int temp=*x;
    *x = *y;
    *y=temp;
}
int main() {
    //Code
    // int x=10;
    // int* ptr=&x;
    // printf("%d\n",x);
    // printf("%p\n",ptr);
    // printf("%d\n",&x);
    int x=10;
    int y=20;
    swap(&x,&y);
    printf("x->%d y->%d",x,y);
    return 0;
}


