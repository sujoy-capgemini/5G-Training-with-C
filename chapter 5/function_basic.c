#include <stdio.h>

void oddEven(int x){
    if(x%2==0)printf("%d is Even",x);
    else printf("%d is Odd",x);
}
int main() {
    //Code
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    oddEven(n);
    return 0;
}