#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int n;
    int k=0;
    while(a>0)
    {
        n=a%2;
        k=k*10+n;
        a=a/2;
    }
    printf("%d",k);
    return 0;
}