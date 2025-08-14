#include <stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x = *y;
    *y = temp;
}
int main() {
    //Code
    int x,y;
    printf("Enter x Number :");
    scanf("%d",&x);
    printf("Enter y Number :");
    scanf("%d",&y);
    printf("%d %d",x,y);
    
    swap(&x,&y);
    printf("\n");
    printf("%d %d",x,y);
    return 0;
}