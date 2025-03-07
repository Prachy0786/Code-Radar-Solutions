int findOccurrence(int* arr,int n,int target,char mode)
{
    int i; int c=-1;
    for(i=0;i<n;i=i+1)
    {
        if(arr[i]==target)
        {
            if(mode=='F')
            {
                c=i;
                break;
            }
            else
            {
                c=i;
            }
        }
    }
    return c;
}