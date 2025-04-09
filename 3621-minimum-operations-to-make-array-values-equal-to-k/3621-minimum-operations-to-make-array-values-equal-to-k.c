int minOperations(int* nums, int numsSize, int k) 
{
    int n=numsSize;
    int i,j;
    int a[n],c=0,f;
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=0;j<i;j++)
        {
            if(nums[i]==nums[j])
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {
           c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(nums[i]<k)
        {
            return -1;
        }   
    }
    for(i=0;i<n;i++)
    {
        if(nums[i]==k)
        {
            return c-1;
        }   
    }
    return c;
}
