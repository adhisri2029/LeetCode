char* reversePrefix(char* word, char ch) 
{
    int len=strlen(word);
    int index=-1;
    for (int i=0;i<len;i++) 
    {
        if (word[i]==ch) 
        {
            index=i;
            break;
        }
    }
    if (index!=-1) 
    {
        int start=0;
        while (start<index) 
        {
            char temp=word[start];
            word[start]=word[index];
            word[index]=temp;            
            start++;
            index--;
        }
    }
    return word;
}

    
