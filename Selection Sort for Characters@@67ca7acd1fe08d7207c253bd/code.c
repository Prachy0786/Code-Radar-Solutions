// Your code here...

int selectionSort(char *arr,int n)
{
    int d,i;   char c;
    for(d=0;d<n;d++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                c = a[i];
                a[i] = a[i+1];
                a[i+1] = c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}