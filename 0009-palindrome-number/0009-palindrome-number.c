bool isPalindrome(int x) 
{
   int m,r;
   long s;
    if(x<0)
    return false;
    m=x;
    s=0;
    while(x!=0)
    {
        r=x%10;
        s=s*10+r;
        x=x/10;
    }
if(m==s)
return true;
else
return false;
return 0;
}