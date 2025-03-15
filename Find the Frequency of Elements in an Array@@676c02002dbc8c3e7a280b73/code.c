#include <stdio.h>
int main()
{
    int n;   scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    int e=0,d,z=0,k;
    for(i=0;i<=9-e;i++)
    {
        int f=1;
        for(d=i+1;d<=9-e;d++)
        {
            if(a[i]==a[d])
            {
                e++;    
                z=d;
                f++;
                for(k=z;k<=9-e;k++)
                {
                    a[k]=a[k+1];
                }
                d--;
            }
        }
        printf("%d %d\n",a[i],f);
    }
}