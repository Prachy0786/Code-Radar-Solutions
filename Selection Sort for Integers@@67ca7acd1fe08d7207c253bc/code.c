// Your code here...

void selectionSort(int* a,int n)
{
    int d,i,c;
    for(d=0;d<n;d=d+1)
    {
    for(i=0;i<n-1;i=i+1)
    {
        if(a[i]>a[i+1])
        {
            c=a[i+1];
            a[i+1]=a[i];
            a[i]=c;
        }
    }
    }
    
}
