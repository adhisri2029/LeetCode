char* convertToBase7(int num) 
{
    static char result[32];
    int isNegative=num<0; 
    int index=0;
    if (num==0) 
    {
        strcpy(result,"0");
        return result;
    }
    if (isNegative) 
    {
        num=-num;
    }
    while (num>0) 
    {
        result[index++]=(num%7)+'0'; 
        num /= 7; 
    }
    if (isNegative) 
    {
        result[index++]='-'; 
    }
    result[index]='\0'; 
    int start=0,end=index-1;
    while (start<end) 
    {
        char temp=result[start];
        result[start]=result[end];
        result[end]=temp;
        start++;
        end--;
    }

    return result;
}

    
