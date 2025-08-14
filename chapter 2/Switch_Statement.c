#include <stdio.h>

int main()
{
    // Code
    int x;
    printf("Enter a Day No :");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid Day Name");
    }
    return 0;
}