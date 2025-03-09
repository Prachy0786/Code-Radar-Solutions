// Your code here...
#include <stdio.h>
int main()
{
    int n;     scanf("%d",&n);
    int i,a[n],c=100,d=0,e=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n==1)
    {
        printf("-1");
    }
    else
    {
        int d;
        for(d=0;d<n;d++)
        {
            for(i=d+1;i<n;i++)
            {
                if(a[i]>a[d])
                {
                    if(c<(a[i]-a[d]))
                    {
                        c = a[i]-a[d];
                        d = a[d];
                        e = a[i]
                    }
                }
                else
                {
                    if(c<(a[d]-a[i]))
                    {
                        c = a[d]-a[i];
                        d = a[i];
                        e = a[d];
                    }
                }
            }
        }
        printf("%d %d",d,e);
    }
}