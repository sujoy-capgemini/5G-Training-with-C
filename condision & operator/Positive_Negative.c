#include <stdio.h>

int main()
{
    // Your code here
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    if (x > 0)
        printf("x is positive Number");
    if (x < 0)
        printf("x is Negative Number");
    return 0;
}