int romanToInt(char * s) 
{
    int res=0;
    for (int i=0;s[i]!='\0';i++) 
    {
        if (s[i]=='I') 
        {
            if (s[i+1]=='V') 
            {
                res=res+4;
                i++;
            } 
            else if(s[i+1]=='X') 
            {
                res=res+9;
                i++; 
            } else 
            {
                res=res+1;
            }
        } else if(s[i]=='V') 
        {
            res=res+5;
        } else if(s[i]=='X') 
        {
            if (s[i+1]=='L') 
            {
                res=res+40;
                i++; 
            } else if(s[i+1]=='C') 
            {
                res=res+90;
                i++; 
            } 
            else 
            {
                res=res+10;
            }
        } 
        else if(s[i]=='L') 
        {
            res=res+50;
        } 
        else if (s[i]=='C') 
        {
            if (s[i+1]=='D') 
            {
                res=res+400;
                i++;
            } 
            else if (s[i+1]=='M') 
            {
                res=res+900;
                i++; 
            } 
            else 
            {
                res=res+100;
            }
        } 
        else if(s[i]=='D') 
        {
            res=res+500;
        } 
        else if(s[i]=='M') 
        {
            res=res+1000;
        }
    }   
    return res;
}

    
