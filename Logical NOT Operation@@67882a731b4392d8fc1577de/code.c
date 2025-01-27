#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a!>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    printf("%s", welcome());
    return 0;
}