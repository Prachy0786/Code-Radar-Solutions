#include <stdio.h>
int isPrime(int n)
{
    int c=1,i;
    for(i=2;i<n;i=i+1)
    {
        if(n%i==0)
        {
            c=0;
            break;
        }
    }
    return c;
}
int main()
{
    int t;     scanf("%d",&t);
    while(t--)
    {
        int n;    scanf("%d",&n);
        printf("%d\n",isPrime(n));
    }
    return 0;
}