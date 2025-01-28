#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        if(b*b == a)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        if(a*a == b)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    return 0;
}