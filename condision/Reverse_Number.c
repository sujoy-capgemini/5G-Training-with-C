#include <stdio.h>

int main() {
    //Code
    int n; //1234
    printf("Enter a Number :");
    scanf("%d",&n);
    int r=0;
    while(n!=0){
       int ld=n%10;
       n=n/10;
       
       r=r*10;
       r=r+ld;
    }
    printf("Reverse Number is :%d",r);
    return 0;
} 