// Your code here...
#include <stdio.h>
int main()
{
    int n;   scanf("%d",&n);
    int i,a[n],c=-1,d=-1;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        if(c<a[i])
        {
            d=c;
            c=a[i];
        }
        else
        {
            if(d<a[i])
            {
                d=a[i];
            }
        }
    }
    printf("%d",d);
}