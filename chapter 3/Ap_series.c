#include <stdio.h>

int main() {
    //3 5 7 9 ... n
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    
    for(int i=1;i<=2*n-1;i=i+2){
    printf("%d\n",i);
    }
    return 0;
}