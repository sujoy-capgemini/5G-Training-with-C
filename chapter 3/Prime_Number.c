#include <stdio.h>

int main()
{
    // Code
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);

    int flag = 1; // 1 means prime
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 0; // Not Prime
            break;
        }
    }
    if (n == 1)
    {
        printf("%d Number is not Prime or Composite", n);
    }
    else if (flag == 1)
    {
        printf("%d Number is Prime", n);
    }
    else
    {
        printf("%d Number is Composite(Not-Prime)", n);
    }
    return 0;
}