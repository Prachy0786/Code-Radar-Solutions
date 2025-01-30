#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    int c = a%100;
    if(a%100==0)
    {
        if((c)%4==0)
        {
            printf("Leap Year");
        }
        else
        {
            printf("Not a Leap Year");
        }
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}