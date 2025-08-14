#include <stdio.h>

int main() {
    //Code
    int year;
    scanf("%d",&year);
    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("This is a Lipiar");
    }
    else{
        printf("This is Not a Lipiar");
    }
    return 0;
}