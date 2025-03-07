// Your code here...
int printPrimeInRange(int a,int b)
{
    int i,j;
    for(i=a;i<=b;i=i+1)
    {
        int c=0;
        for(j=2;j<i;j=j+1)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("%d\n",i);
        }
    }
}