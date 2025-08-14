#include <stdio.h>

int main() {
    //Three Digit Number
    int x;
    printf("Enter a Three Digit Number :");
    scanf("%d",&x);
    if(x>=100 && x<=999){
    printf("This is Three digit Number ");
    }
    else{
        printf("Not three digit Number ");
    }
    return 0;
}