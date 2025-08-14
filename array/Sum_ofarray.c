#include <stdio.h>
#include <limits.h>
int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int maxElement(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
      if(max<arr[i]){
       max=arr[i];
      }
    }
    return max;
}
//*maxiumum value print using INT_MIN
int maxElement_UsingINTMIN(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    // Code
    int n;
    printf("Enter array size :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans=sum(arr, size);
    int max=maxElement(arr,size);
    printf("The sum is :%d\n",ans);
    printf("The max elsement :%d\n",max);
    int max2=maxElement_UsingINTMIN(arr,size);
    printf("The max element using(INT_MIN) :%d\n",max2);
    return 0;
}