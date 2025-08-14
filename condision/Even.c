#include <stdio.h>

int main()
{
    // Code
    // for (int i = 2; i <= 100; i=i+2)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d ", i);
    //     }
    // }


    //*Using continue:
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
        { // odd Number
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}