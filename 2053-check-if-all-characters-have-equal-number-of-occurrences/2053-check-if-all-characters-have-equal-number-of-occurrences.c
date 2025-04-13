bool areOccurrencesEqual(char* s) 
{
    int freq[26]={0};  
    int i;
    for (i=0;s[i]!='\0';i++) 
    {
        freq[s[i]-'a']++;
    }
    int firstCount=-1;
    for (i=0;i<26;i++) 
    {
        if (freq[i]>0) 
        {
            if (firstCount==-1) 
            {
                firstCount=freq[i];  
            } else if (firstCount!=freq[i]) 
            {
                return false;
            }
        }
    }
    return true;
}

    
