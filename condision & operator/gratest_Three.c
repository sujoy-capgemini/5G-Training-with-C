#include <stdio.h>

int main() {
    //Code
    int a,b,c;
    printf("Enter 3 Number :");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)printf("%d is grater",a);
    else if(b>=a && b>=c)printf("%d is grater",b);
    else if(c>=a && c>=b)printf("%d is grater",c);
    return 0;
}