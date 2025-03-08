// Your code here...
#include <stdio.h>
int main()
{
    int n;      scanf("%d",&n);
    int i,a[n],c=1000,d=1000;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(c>a[i])
        {
            d=c;
            c=a[i]''
        }
        else
        {
            if(d>a[i])
            {
                d=a[i];
            }
        }
    }
    if(d!=1000 && c!=d)
    {
        printf("%d",d);
    }
    else
    {
        printf("-1");
    }
}