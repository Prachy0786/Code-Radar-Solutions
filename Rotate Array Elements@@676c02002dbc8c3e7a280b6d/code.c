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
        int k=a[4];
        for(int d=0;d<n-1;d++)
        {
            a[d]=a[d++];
        }
        a[0]=k;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}