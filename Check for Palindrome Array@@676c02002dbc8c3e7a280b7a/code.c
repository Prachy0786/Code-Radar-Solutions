// Your code here...
#include <stdio.h>
int main()
{
    int n;     scanf("%d",&n);
    int i,a[n],c=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    int l=n-1;
    for(i=0;i<n;i++)
    {
        if(a[l]!=a[i])
        {
            c=0;
        }
        l--;
    }
    if(c==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}