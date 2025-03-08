// Your code here...
#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int c=0,d=1;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&a[i]);
        for(int j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                d=0;
                break;
            }
        }
        if(d==1 && a[i]>1)
        {
            c=c+1;
        }
    }
    printf("%d",c);   
}    