#include<stdio.h>
int main()
{
    int n;    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;   int k=-1;
    for(int d=0;d<n-1;d++)
    {
        for(i=d+1;i<n;i++)
        {
            if(a[d]==a[i])
            {
                k=a[d];
                break;
            }
        }
    }
    printf("%d",k);
}