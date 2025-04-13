int compare(const void* a, const void* b) 
{
    return *(int*)b - *(int*)a;  
}
int maxCoins(int* piles, int pilesSize)
{
    qsort(piles,pilesSize,sizeof(int),compare);
    int sum=0;
    int index=1; 
    for (int i=0;i<pilesSize/3;i++) 
    {
        sum += piles[index];
        index += 2; 
    }

    return sum;
}

    
