int smallestNumber(int n) 
{
    int x=n;
    while (1) 
    {
        int temp=x;
        int isSetBits=1;
        while (temp>0) 
        {
            if (temp%2==0) 
            {
                isSetBits=0;
                break;
            }
            temp/=2;
        }
        if (isSetBits) 
        {
            return x;
        }
        x++;
    }
}

    