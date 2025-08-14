#include <stdio.h>
void Mergetwoarray(int arr1[], int n, int arr2[], int m)
{
    int newarray[n + m];
    int i = 0, j = 0, k = 0;
    while (i < n)
    {
        if (arr1[i] < arr2[j])
        {
            newarray[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            newarray[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        newarray[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        newarray[k] = arr2[j];
        k++;
        j++;
    }
    
    for(int i=0;i<n+m;i++){
        printf("%d ",newarray[i]);
    }

}
int main()
{
    // Code
    int n, m;
    printf("Enter 1-st array size:");
    scanf("%d", &n);
    printf("Enter 2-nd array size:");
    scanf("%d", &m);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[m];
    for(int j=0;j<m;j++){
        scanf("%d",&arr2[j]);
    }
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    Mergetwoarray(arr1, n, arr2, m);
    return 0;
}