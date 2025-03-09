// Your code here...
#include <stdio.h>
int main()
{
    int n;     scanf("%d",&n);
    int i,a[n],c=1000,d=0,e=0;
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
        int g;
        for(g=0;g<n;g++)
        {
            for(i=g+1;i<n;i++)
            {
                if(a[i]>a[g])
                {
                    if(c>(a[i]-a[g]))
                    {
                        c = a[i]-a[g];
                        d = a[g];
                        e = a[i];
                    }
                }
                else
                {
                    if(c>(a[g]-a[i]))
                    {
                        c = a[g]-a[i];
                        d = a[i];
                        e = a[g];
                    }
                }
            }
        }
        printf("%d %d",d,e);
    }
}