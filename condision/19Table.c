#include <stdio.h>

int main() {
    //Code
     
    //*Method 1:
    // for(int i=1;i<=190;i++){
    //     if(i%19==0){
    //         printf("%d ",i);
    //     }
    // }
    

    //*Method 2:
    for(int i=19;i<=190;i=i+19){
        printf("%d ",i);
    }
    return 0;
}