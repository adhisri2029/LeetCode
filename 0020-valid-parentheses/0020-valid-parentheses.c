bool isValid(char* s)
{
    char stack[10000];
    int top=-1;
    for (int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if (ch=='('||ch=='{'||ch=='[') 
        {
            stack[++top]=ch;
        } 
        else if(ch==')')
        {
            if (top==-1||stack[top]!='(') 
            return false;
            top--;
        } 
        else if(ch=='}') 
        {
            if (top==-1||stack[top]!='{')
            return false;
            top--;
        } 
        else if(ch==']')
        {
            if (top==-1||stack[top]!='[')
             return false;
            top--;
        }
    }
    return top==-1;
}

    