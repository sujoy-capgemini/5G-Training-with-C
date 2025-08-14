#include <stdio.h>

int main() {
    //Code
    int arr[4][2]={1,2,3,4,5,6,7,8};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}