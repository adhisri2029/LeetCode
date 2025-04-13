int* leftRightDifference(int* nums, int numsSize, int* returnSize) 
{
    int absolute(int x) 
    {
    if (x < 0) return -x;
    return x;  
    }
    static int answer[1000];
    *returnSize = numsSize;
    int leftSum[1000] = {0};
    int rightSum[1000] = {0};
    for (int i=1;i<numsSize;i++) 
    {
        leftSum[i]=leftSum[i-1]+nums[i-1];
    }
    for (int i=numsSize-2;i>=0;i--) 
    {
        rightSum[i]=rightSum[i+1]+nums[i + 1];
    }
    for (int i=0;i<numsSize;i++) 
    {
        int diff=leftSum[i]-rightSum[i];
        answer[i]=absolute(diff);
    }
    return answer;
}

    
