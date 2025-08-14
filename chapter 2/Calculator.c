#include <stdio.h>

int main() {
    //Code
    char ch;
    printf("Enter a Operator(+, -, *, /) :");
    scanf("%c",&ch);

    int a;
    printf("Enter First Number :");
    scanf("%d",&a);

    int b;
    printf("Enter Secound Number :");
    scanf("%d",&b);

    // if(ch=='+')printf("%d",a+b);
    // else if(ch=='-')printf("%d",a-b);
    // else if(ch=='*')printf("%d",a*b);
    // else if(ch=='/')printf("%d",a/b);
    // else printf("Invalid Operator !");


    switch(ch){
        case '+':
        printf("%d\n",a+b);
        break;

        case '-':
        printf("%d\n",a-b);
        break;

        case '*':
        printf("%d\n",a*b);
        break;

        case '/':
        printf("%d\n",a/b);
        break;

        default:
        printf("Invalid Operator !");
    }

    return 0;
}