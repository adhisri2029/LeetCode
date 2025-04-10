char* removeOuterParentheses(char* s) 
{
    int len=strlen(s);
    char*result=(char*)malloc(sizeof(char)*(len+1));
    int dep=0;
    int j=0;
    for (int i=0;i<len;i++) 
    {
        if(s[i]=='(') 
        {
            if (dep>0) 
            {
                result[j++]='(';
            }
            dep++;
        } else if(s[i]==')') 
        {
            dep--;
            if (dep>0) 
            {
                result[j++]=')';
            }
        }
    }
    result[j]='\0'; 
    return result;
}
   
