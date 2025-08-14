#include <stdio.h>

int min(int x,int y){
   if(x>y) return y;
   else return x;
}
int main() {
    //Code
    int n,m;
    printf("Enter 1st Number :");
    scanf("%d",&n);
    
    printf("Enter 2nd Number :");
    scanf("%d",&m);
    
    int x=min(n,m);
    printf("%d and %d min is %d",n,m,x);
    return 0;
}