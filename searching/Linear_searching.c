#include <stdio.h>

int searching(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return 1;
        }
        return -1;
    }
}
int main()
{
    // Code
    int arr[] = {10, 20, 30, 40, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 100;
    int result=searching(arr, size, x);
    if(result==1){
    printf("The Element is found");
    }
    else{
    printf("The Element Not found");
    }
    return 0;
}