int getLucky(char* s, int k) 
{
    char numStr[300]="";  
    char temp[4];
    int len=strlen(s);
    for (int i=0;i<len;i++) 
    {
        int val=s[i]-'a'+1;
        sprintf(temp,"%d",val);  
        strcat(numStr,temp);   
    }
    for (int i=0;i<k;i++) 
    {
        int sum=0;
        for (int j=0;numStr[j]!='\0';j++) {
            sum += numStr[j]-'0';
        }
        sprintf(numStr,"%d",sum); 
    }
    int result;
    sscanf(numStr,"%d",&result);
    return result;
}



    