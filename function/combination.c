#include <stdio.h>
//*factorial
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    // Code
    int n;
    printf("Enter  n :");
    scanf("%d", &n);
    int r;
    printf("Enter r :");
    scanf("%d",&r);

    int ans=ncr(n,r);
    printf("n=%d and r=%d combination count is :%d",n,r,ans);
    return 0;
}