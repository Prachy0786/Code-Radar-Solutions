
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
    if(c==0 && n!=1 && n!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
