#include<stdio.h>
int main()
{
    int n;     scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s;     scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        int k=a[n-1];
        for(int d=n-1;d>0;d--)
        {
            a[d]=a[d-1];
        }
        a[0]=k;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}