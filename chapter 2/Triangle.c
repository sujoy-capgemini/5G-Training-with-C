#include <stdio.h>

int main() {
    //Code
    int a,b,c;
    printf("Enter a b c of triangle :");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        printf("This is a triangle");
    }
    else{
        printf("Not a triangle");
    }
    return 0;
}