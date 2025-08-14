#include <stdio.h>

int main() {
    //*Pointer -Advance concept:
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    //*question 1: (Access The value)
    printf("%d\n",*(arr+1)); //2
    printf("%d\n",*(arr+2)); //3
    printf("%d\n",*(arr+3)); //4

    //*question 2:(Printing all value)
    int* ptr=arr;
    for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
    }
    printf("\n");

    //*question 3: (change The value)
    *ptr=100;
    *(ptr+1)=101;
    *(ptr+2)=102;
     printf("The index is :%d\n",*ptr);
     printf("The index is :%d\n",*(ptr+1));
     printf("The index is :%d\n",*(ptr+2));
    
     //*question 4: 



    return 0;
}