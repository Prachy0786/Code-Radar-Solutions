#include <stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf(" %c",&c);
    switch(c)
    {
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b);
        break;
        case '/' :
        if(b==0)
        {
            printf("error");
        }
        else
        {
            printf("%d",a/b);
        }
        break;
        case '*' : printf("%d",a*b);
        break;
        default  : printf("error");
    }
    return 0;
}