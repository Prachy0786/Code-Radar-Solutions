// Your code here...
#include <stdio.h>
int main()
{
    int n;    scanf("%d",&n);
    int i; char a[n];
    for(i=0;i<n;i++)
    {
        scanf(" %c",a[i]);
    }
    int d;   char c;
    for(d=0;d<n;d++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                c = a[i];
                a[i] = a[i+1];
                a[i+1] = c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}