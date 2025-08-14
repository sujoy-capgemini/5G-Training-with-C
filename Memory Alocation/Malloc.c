#include <stdio.h>
#include <stdlib.h>

int main() {
    //Code
    // int a=sizeof(float);
    // printf("%d",a);

    // int* ptr=(int*)malloc(10*4);
    // printf("%d",*ptr);
    // return 0;


    //Example:2
    int n;
    printf("Enter a number integer you want :");
    scanf("%d",&n); 
    int* ptr=(int*)malloc(n * sizeof(int));
    int* p=ptr;
    for(int i=0;i<n;i++){
       scanf("%d",&(*ptr));
       ptr++;
    }
    for(int i=0;i<n;i++){
       printf("%d ",(*p));
       p++;
    }

}