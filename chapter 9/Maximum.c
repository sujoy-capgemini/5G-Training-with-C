#include <stdio.h>
#include <limits.h>
int main() {
    //Code
    int row,col;
    printf("Enter row :");
    scanf("%d",&row);
    printf("Enter col :");
    scanf("%d",&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    printf("The max element is : %d",max);
    
    return 0;
}