#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%.2f",(float)sum/n);
}