#include <stdio.h>

int main() {
    //Code
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    //*Times (1-23) Loop run
    int highest_factor=1;
    // for(int i=1;i<=n-1;i++){
    //     if(n%i==0){
    //         highest_factor=i;   
    //     }
    // }

    //*Times (23-11) Loop run 
    for(int i=n-1;i>=1;i--){
        if(n%i==0){
            highest_factor=i;
            break;
        }
    }
    printf("Highest Factor : %d",highest_factor);
    return 0;
}