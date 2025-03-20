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
    int temp=0;
    for(i=0;i<s;i++)
    {
    for(i=0;i<n-1;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    a[n-1]=a[0];
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}