#include <stdio.h>

int main() {
    //Code
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int ld=n%10;
        n=n/10;
        sum=sum+ld;
    }
    printf("The Sum of Digit is: %d ",sum);
    return 0;
}