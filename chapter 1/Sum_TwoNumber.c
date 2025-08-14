#include <stdio.h>

int main() {
    int x, y, sum;

    printf("Enter the first number: ");
    scanf("%d", &x);  // Corrected to use scanf

    printf("Enter the second number: ");
    scanf("%d", &y);  // Corrected to use scanf

    sum = x + y;
    printf("The sum is: %d\n", sum);

    return 0;
}
