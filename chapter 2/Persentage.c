#include <stdio.h>

int main()
{
    // Code
    //  81-100 ->very good
    //  61-80 -> good
    //  41-60 ->Avarage
    //  <=40 ->Fail

    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    if (x >= 81 && 100 <= x)
    {
        printf("Very good");
    }
    else if (x >= 61 && x <= 80)
    {
        printf("good");
    }
    else if (x >= 41 && x <= 60)
    {
        printf("Avarage");
    }
    else if (x <= 40)
    {
        printf("Fail");
    }
    return 0;
}