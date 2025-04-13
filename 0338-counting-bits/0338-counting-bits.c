int* countBits(int n,int* returnSize) 
{
    int*ans=(int*)malloc((n+1)*sizeof(int)); 
    for (int i=0;i<=n;i++) 
    {
        int c=0;
        int num=i;
        while (num>0) 
        {
            if (num % 2 == 1) 
            {
                c++;
            }
            num=num/2;
        }
        ans[i]=c;
    }
    *returnSize=n+1;
    return ans;
}

    
