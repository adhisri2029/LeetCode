int maximum69Number (int num) 
{
    char str[6]; 
    int i;
    sprintf(str,"%d",num);
    for (i=0;str[i]!='\0';i++) 
    {
        if (str[i]=='6') 
        {
            str[i]='9';
            break;
        }
    }
    int result=0;
    for (i=0;str[i]!='\0';i++) 
    {
        result=result*10+(str[i]-'0');
    }

    return result;
}

    
