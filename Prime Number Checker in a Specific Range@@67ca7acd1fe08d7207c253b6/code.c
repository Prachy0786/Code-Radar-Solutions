// Your code here...
int printPrimesInRange(int a,int b)
{
    int i,j,k=0;
    for(i=a;i<=b;i=i+1)
    {
        if(i>0)
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
        if(c==0 && i!=1 && i!=0)
        {
            printf("%d ",i);
            k=k+1;
        }
        
    }
    if(k==0)
    {
        printf("No prime numbers");
    }
    }
}
}