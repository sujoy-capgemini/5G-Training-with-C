#include <stdio.h>

int main()
{
    // Your code here
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    // if(x>=0){
    //     printf("Absultu value is :%d",x);
    // }
    // if(x<0){
    //     //*Negative
    //     //*Negative to positive.
    //     x=x*(-1);
    //     printf("Absultu value is :%d",x);
    // }

    if (x < 0)x = x * (-1);
    printf("Absultu value is :%d", x);
    return 0;
}