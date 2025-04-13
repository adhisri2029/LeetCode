char* addBinary(char* a, char* b) 
{
    static char result[10005];
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0;
    int carry = 0;
    while (i>=0||j>=0||carry) 
    {
        int digit1=(i>=0)?a[i--]-'0':0;
        int digit2=(j>=0)?b[j--]-'0':0;
        int sum=digit1+digit2+carry;
        result[k++]=(sum%2)+'0';
        carry=sum/2;
    }
    for (int l=0;l<k/2;l++) 
    {
        char temp=result[l];
        result[l]=result[k-1-l];
        result[k-1-l] =temp;
    }
    result[k] ='\0';
    return result;
}

    
