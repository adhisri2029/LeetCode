/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = (int *)malloc(2 * sizeof(int));
    int n = numsSize;
    *returnSize = 2;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++)
    if(nums[i]+nums[j] == target)
    {
        ans[0] = i;
        ans[1] = j;
        return ans;
    }
    return ans;    
}