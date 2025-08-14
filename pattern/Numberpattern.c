#include <stdio.h>

int main() {
    //Code
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}