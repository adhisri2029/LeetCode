int countPoints(char* rings) 
{
    int rods[10] = {0};  
    int i;
    for (i=0;rings[i]!='\0';i+=2) 
    {
        char color = rings[i];
        int rod=rings[i+1]-'0';
        if (color=='R') 
        {
            rods[rod]|=0x1;  
        } else if(color=='G')
        {
            rods[rod]|=0x2; 
        } else if(color=='B') 
        {
            rods[rod]|=0x4;  
        }
    }
    int count=0;
    for (i=0;i<10;i++) 
    {
        if (rods[i]==0x7) 
        {  
            count++;
        }
    }
    return count;
}

    
