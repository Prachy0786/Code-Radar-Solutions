// Your code here...
#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int i,a[n];
    int c=0,d=-100;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            c=a[i];
            if(c>d)
            {
                d=c;
            }
        }
    }
    if(d!=-100)
    {
        printf("%d",d);
    }
    else
    {
        printf("-1");
    }
}