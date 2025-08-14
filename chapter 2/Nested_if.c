#include <stdio.h>

int main()
{
    // Code
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);
    //*Divisible by 5 or 3 Not 15

    if (x % 15 != 0)
    {
        if (x % 3!= 0)
        {
            if (x % 5 == 0)
            {
                printf("Divisible by 5 or 3 Not 15");
            }
        }
        else
        {
            printf("Condision Invalid !");
        }
    }
    else
    {
        printf("Condision Invalid !");
    }
    return 0;
}