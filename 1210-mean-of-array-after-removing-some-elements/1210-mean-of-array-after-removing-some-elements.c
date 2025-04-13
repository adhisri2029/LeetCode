double trimMean(int* arr, int arrSize) 
{
    int trim=arrSize/20;  
    int i,j,temp;
    for (i=0;i<arrSize-1;i++) 
    {
        for (j=0;j<arrSize-1-i;j++) 
        {
            if (arr[j]>arr[j+1]) 
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int sum = 0;
    int count = 0;
    for (int i = trim;i<arrSize-trim;i++) {
        sum += arr[i];
        count++;
    }

    return(double)sum/count;
}

    
