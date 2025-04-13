int minElement(int* nums,int numsSize) 
{
    int min=100000;  
    for (int i=0;i<numsSize;i++) 
    {
        int n=nums[i];
        int digitSum=0;
        while (n>0) 
        {
            digitSum+=n%10;
            n/=10;
        }
        nums[i]=digitSum;  
        if (digitSum<min) 
        {
            min=digitSum;
        }
    }
    return min;
}

    
