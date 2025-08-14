#include <stdio.h>

int main()
{
    // Code
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d Number is composite", n);
            break;
        }
    }
    return 0;
}