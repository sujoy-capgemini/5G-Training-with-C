#include <stdio.h>

int main()
{
    // Your code here
    float x; // 3.14
    printf("Enter a Float Number :");
    scanf("%f", &x);
    //*Typecasting
    int y = (int)x;     // 3
    float z = (float)y; // 3
    if (x - z == 0)
    {
        printf("Number is Integer");
    }
    if(x-z>0){
        printf("Number is Not an Integer");
    }
    return 0;
}