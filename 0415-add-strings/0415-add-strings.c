char* addStrings(char*num1,char*num2) 
{
    int len1=strlen(num1);
    int len2=strlen(num2);
    int maxLen=(len1>len2)?len1:len2;
    char* result=(char*)malloc((maxLen+2)*sizeof(char));  
    int i=len1-1;
    int j=len2-1;
    int k=0; 
    int carry=0;
    while (i>=0||j>=0||carry!=0)
    {
        int digit1=(i>=0)?num1[i]-'0':0;  
        int digit2=(j>=0)?num2[j]-'0':0;  
        int sum=digit1+digit2+carry;  
        result[k]=(sum%10)+'0';      
        carry=sum/10;                 
        i--;j--;k++;  
    }
    result[k]='\0';
    for (int l=0,r=k-1;l<r;l++,r--) 
    {
        char temp=result[l];
        result[l]=result[r];
        result[r]=temp;
    }
    return result;
}

    
