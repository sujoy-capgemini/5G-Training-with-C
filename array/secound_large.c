#include <stdio.h>
#include <limits.h>

int maxElement(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    //return max;

    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    return smax;

}

int main() {
    //Code
    int n;
    printf("Enter array size :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int smax=maxElement(arr,size);
    printf("The 2nd max Element :%d",smax);

    return 0;
}