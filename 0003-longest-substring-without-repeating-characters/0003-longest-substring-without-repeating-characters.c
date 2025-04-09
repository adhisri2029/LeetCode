int lengthOfLongestSubstring(char* s) 
{
    int n=strlen(s);
    if(n == 0)
     return 0;
    int max = 0;
     for(int i=0;i<n;i++)
     {char *a= (char*) malloc((n+1)*sizeof(char));
        int k=0;
        for(int j=i;j<n;j++)
        {   int f = 0;
            for(int l=0;l<k;l++)
            if(s[j] == a[l])
            {f=1;
             break;
            }
            if(f == 0)
            { a[k] = s[j];
                k++;
            }
            else
                break; 
        }
        a[k] = '\0';
        k++;
        if(strlen(a) > max)
        max = strlen(a);
    }
    return max;
}




