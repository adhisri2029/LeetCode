int minimumOperations(int* nums, int numsSize) 
{
    int freq[101]={0};
    int count=0;
    for (int i=0;i<numsSize;i++) 
    {
        int num=nums[i];
        if (num>0&&freq[num]==0) 
        {
            freq[num] = 1;
            count++;
        }
    }
    return count;
}

    
