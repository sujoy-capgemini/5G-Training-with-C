#include <stdio.h>

int main() {
    int take_input;
    printf("Enter the input: ");
    scanf("%d", &take_input);

    if (take_input % 5 == 0 && take_input % 4 == 0) {
        printf("Divisible by both 5 and 4\n");
    } 
    else {
        printf("Not divisible by both 5 and 4\n");
    }

    return 0;
}
