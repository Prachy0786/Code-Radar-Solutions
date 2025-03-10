#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int i,a[n],c=0,f=0;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i=i+1)
    {
        if(a[i]>a[i+1])
        {
            c=a[i];
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("%d",c);
    }
    else
    {
        
        if(c<a[n-1] && a[n-2]!=a[n-1])
        {
            printf("%d",a[n-1]);
        }
        else
        {
            printf("-1");
        }
    }     
    return 0;
}