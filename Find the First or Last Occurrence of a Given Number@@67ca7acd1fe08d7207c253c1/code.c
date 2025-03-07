// Your code here...
int findOccurrence(int* arr,int n,int target,char mode)
{
    int i,c=0;
        for(i=0;i<n;i=i+1)
        {
            if(target==arr[i])
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
            return c;
        }
}