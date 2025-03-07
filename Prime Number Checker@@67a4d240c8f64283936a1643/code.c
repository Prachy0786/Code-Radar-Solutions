
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
