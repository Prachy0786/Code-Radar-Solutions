
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
    for(i=0;i<n-s;i++)
    {
        temp=a[i];
        a[i]=a[i+s-1];
        a[i+s-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}