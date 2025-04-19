char* capitalizeTitle(char* title) 
{
    int len=strlen(title);
    int start=0;
    for (int i=0;i<=len;i++) 
    {
        if (title[i]==' '||title[i]== '\0') 
        {
            int wordLength=i-start;
            if (wordLength<=2) 
            {
                for (int j=start;j<i;j++) 
                {
                    title[j]=tolower(title[j]);
                }
            } 
            else 
            {
                title[start]=toupper(title[start]);
                for(int j=start+1;j<i;j++) 
                {
                    title[j]=tolower(title[j]);
                }
            }
            start=i+1;
        }
    }
    return title;
}

    
