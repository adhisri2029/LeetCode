int findKOr(int*nums,int numsSize,int k) 
{
    int result=0;
    for (int bit=0;bit<31;bit++) 
    {
        int c=0;
        for (int i=0;i<numsSize;i++) 
        {
            if ((nums[i]&(1<<bit))!=0) 
            {
                c++;
            }
        }
        if (c>=k) 
        {
            result|=(1<<bit);
        }
    }

    return result;
}

    
