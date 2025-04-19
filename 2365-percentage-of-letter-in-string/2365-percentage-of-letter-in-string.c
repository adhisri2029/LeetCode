int percentageLetter(char* s, char letter) 
{
    int total=0;
    int count=0;
    for (int i=0;s[i]!='\0';i++) 
    {
        total++;
        if (s[i]==letter) 
        {
            count++;
        }
    }
    return (count*100)/total;
}

    
