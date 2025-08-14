// #include <stdio.h>

// int main() {
//     //Code
//     int arr[5]={1,2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//     printf("arr[%d] : %d\n",i,arr[i]);
//     }
//     return 0;
// }

//*Array with pointer :

#include <stdio.h>
int main() {
    //Code
    int arr[5]={1,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *ptr=arr;
    for(int i=0;i<n;i++){
        printf("arr[%d] : %d\n",i,*(ptr+i));
    }
    return 0;
}
