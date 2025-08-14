#include <stdio.h>

int main()
{
    //*Your code here
    int take_input;
    printf("Enter The input :");
    scanf("%d", &take_input);
    if (take_input % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}