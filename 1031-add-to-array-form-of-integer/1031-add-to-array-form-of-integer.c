int* addToArrayForm(int*num,int numSize,int k,int* returnSize) 
{
    int carry=k;
    int i=numSize-1;
    int maxSize=numSize+10; 
    int*result=(int*)malloc(maxSize*sizeof(int));
    int index=maxSize-1;
    while (i>=0||carry>0) 
    {
        if (i>=0)carry+=num[i--];
        result[index--]=carry%10;
        carry /= 10;
    }
    int digitsWritten = maxSize - 1 - index;
    int* finalResult = (int*)malloc(digitsWritten * sizeof(int));
    for (int j = 0; j < digitsWritten; j++) {
        finalResult[j] = result[index + 1 + j];
    }
    free(result);
    *returnSize = digitsWritten;
    return finalResult;
}

    
