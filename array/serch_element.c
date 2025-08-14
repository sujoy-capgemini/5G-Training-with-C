#include <stdio.h>
#include <stdbool.h>
int main() {
    //Code
    int arr[8]={1,2,3,4,5,6,7,8};
    int x;
    printf("Enter the serch element :");
    scanf("%d",&x);
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;

    for(int i=0;i<n;i++){
       if(arr[i]==x){
          flag=true;
          break;
       }
    }
    if(flag==true){
        printf("found");
    }
    else{
        printf("Not found!");
    }
    return 0;
}