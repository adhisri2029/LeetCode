int minimumSum(int* nums, int numsSize) 
{
    if (numsSize<3) 
    return -1; 
    int left_min[numsSize];
    left_min[0]=INT_MAX; 
    for (int i=1;i<numsSize;i++) 
    {
        left_min[i]=(nums[i-1]<left_min[i-1])?nums[i-1]:left_min[i-1];
    }
    int right_min[numsSize];
    right_min[numsSize-1]=INT_MAX; 
    for (int i=numsSize-2;i>=0;i--) 
    {
        right_min[i]=(nums[i+1]<right_min[i+1])?nums[i+1]:right_min[i+1];
    }
    int min_sum=INT_MAX;
    for (int j=1;j<numsSize-1;j++) 
    {  
        if (nums[j]>left_min[j]&&nums[j]>right_min[j]) 
        {
            int current_sum=nums[j]+left_min[j]+right_min[j];
            if (current_sum<min_sum) 
            {
                min_sum=current_sum;
            }
        }
    }
    if (min_sum==INT_MAX) 
    {
        return -1;
    } else 
    {
        return min_sum;
    }
}

    
