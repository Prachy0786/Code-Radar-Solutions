#include<stdio.h>
int main()
{
    int n;   scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int o=0;
    int e=0,d,z=0,k;
    for(i=0;i<n-e;i++)
    {
        int f=1;  
        for(d=i+1;d<n-e;d++)
        {
            if(a[i]==a[d])
            {
                e++;    
                z=d;
                f++;
                for(k=z;k<n-e;k++)
                {
                    a[k]=a[k+1];
                }
                d--;
            }
        }
        if(f>1)
        {
            o=a[i];
        }
    }
    printf("%d",o);
}