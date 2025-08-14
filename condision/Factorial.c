#include <stdio.h>

int main() {
    //Code
    int n; //5
    printf("Enter a Number :");
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++){
     p=p*i;
    }
    printf("The Factorial is :%d",p);
    return 0;
}