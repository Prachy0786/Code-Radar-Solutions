// Your code here...
#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    int count=0;
    for(i=0;i<n;i++)
    {
        int c=a[i],d=0,b=0;
        while(c>0)
        {
            d = c%10;
            b = b*10 + d;
            c = c/10;
        }
        if(b==a[i])
        {
            count++;
        }
    }
    printf("%d",count);
}