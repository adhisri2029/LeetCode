int reverse(int num) 
{
    int reversed_num=0;
    while (num!=0) 
    {
        int digit=num%10;           
        reversed_num=reversed_num*10+digit; 
        num/=10;                     
    }   
    return reversed_num;
}
bool isSameAfterReversals(int num) 
{
    int reversed1=reverse(num);
    int reversed2=reverse(reversed1);
    return reversed2==num;
}

