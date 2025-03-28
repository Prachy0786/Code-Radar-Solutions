// Your code here...
#include <stdio.h>
int main()
{
    int n;    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k;   scanf("%d",&k);
    int d;
    for(d=0;d<n;d++)
    {
        for(i=d+1;i<n;i++)
        {
            if(k==(a[i]+a[d]))
            {
                printf("%d %d\n",a[d],a[i]);
            }
            break;
        }
    }
}