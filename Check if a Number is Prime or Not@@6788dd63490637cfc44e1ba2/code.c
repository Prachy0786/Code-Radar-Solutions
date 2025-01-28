#include <stdio.h>
int main() 
{
    int a,i;
    scanf("%d",&a);
    int c=0;
    for(i=2;i<a;i=i+1)
    {
        if(a%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        printf("Prime");
    }
    else
    {
        if(c==1 || i==0 || i==1)
        {
            printf("Not Prime");
        }
    }
    return 0;
}