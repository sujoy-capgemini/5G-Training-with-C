#include <stdio.h>

void printArray(int* arr,int n){
    for(int i=0;i<n;i++){
        //printf("%d ",arr[i]);
         printf("%d ",*(arr+i));
    }
}

int main() {
    //Code
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    return 0;
}