#include <stdio.h>
int main() 
{
    char a;
    get char();
    int c=0;
    scanf(" %c",&a);
    char y,k;
    for(y='A';y<='Z';y=y+1)
    {
        if(a==y)
        {
            c=1;
            break;
        }
    }    
    for(k='a';k<='z';k=k+1)
    {
        if(a==k)
        {
            c=2;
            break;
        }
    }
    if(c==1)
    {
        printf("Uppercase");

    }
    else
    {
        if(c==2)
        {
            printf("Lowercase");
        }
        else
        {
            printf("Not an alphabet");
        }
    }
    return 0;
}