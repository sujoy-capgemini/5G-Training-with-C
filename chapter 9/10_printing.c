#include <stdio.h>

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
            //scanf("%d",&arr[i][j]);
            arr[i][j]=10;
        }
    }
    printf("The output : \n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}