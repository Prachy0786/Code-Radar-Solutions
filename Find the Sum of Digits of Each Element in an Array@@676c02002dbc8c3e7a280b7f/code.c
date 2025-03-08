#include <stdio.h>
int main() 
{
    int n; 
    scanf("%d",&n);
    int a[n],i,c,d;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        c=abs(a[i]);
        int sum=0;
        while(c>0)
        {
          d=c%10;
          sum=sum+d;
          c=c/10;
        }
        printf("%d ",sum);
    }
    return 0;
}