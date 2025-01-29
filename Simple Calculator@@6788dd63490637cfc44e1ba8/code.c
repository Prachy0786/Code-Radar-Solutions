#include <stdio.h>
int main()
{
    float a,b;
    char c;
    scanf("%f",&a);
    scanf("%f",&b);
    get char();
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