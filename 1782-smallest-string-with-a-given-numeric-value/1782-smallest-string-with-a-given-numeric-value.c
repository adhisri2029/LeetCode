char* getSmallestString(int n, int k) 
{
    char* result=(char*)malloc((n+1)*sizeof(char));
    memset(result,'a',n); 
    result[n]='\0'; 
    int remainingValue=k-n;
    for (int i=n-1;i>=0;i--) 
    {
        int increment=25;
        if (remainingValue<25) 
        {
            increment=remainingValue;
        }
        result[i]+=increment;  
        remainingValue-=increment;
        if (remainingValue==0) 
        {
            break;
        }
    }
    return result;
}

    
