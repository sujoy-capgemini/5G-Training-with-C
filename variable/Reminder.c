#include <stdio.h>

int main() {
    // 1st Formula
    // int a,b,reminder;
    // printf("Enter The 1st Number :");
    // scanf("%d",&a);
    // printf("Enter The 2nd Number :");
    // scanf("%d",&b);
    // reminder=(a%b);
    // printf("%d",reminder);
    // return 0;


    //2nd formula:
    int a,b,reminder;
    printf("Enter The 1st Number :");
    scanf("%d",&a);
    printf("Enter The 2nd Number :");
    scanf("%d",&b);
    int q=a/b;
    reminder=a-(b*q);
    printf("The Reminder when %d is devide by %d is %d",a,b,reminder);
}