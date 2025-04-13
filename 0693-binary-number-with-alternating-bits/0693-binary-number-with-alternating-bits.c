bool hasAlternatingBits(int n) 
{
    char binary[32];
    int index=0;
    while (n>0) 
    {
        binary[index]=(n%2)+'0';
        n=n/2;
        index++;
    }
    for (int i=0;i<index-1;i++) 
    {
        if (binary[i]==binary[i+1]) 
        {
            return false;
        }
    }
    return true;
}

    
