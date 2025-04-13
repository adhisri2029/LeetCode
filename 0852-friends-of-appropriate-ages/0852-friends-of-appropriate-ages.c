int numFriendRequests(int* ages, int agesSize)
{
    int ageFrequencies[121]={0};  
    for (int index=0;index<agesSize;index++) 
    {
        int age=ages[index];
        ageFrequencies[age]++;
    }

    int totalFriendRequests = 0;
    for (int senderAge=1;senderAge<=120;senderAge++) 
    {
        if (ageFrequencies[senderAge]==0) continue;
        for (int receiverAge=1;receiverAge<=120; receiverAge++) 
        {
            if (ageFrequencies[receiverAge]==0) continue;
            if (receiverAge<=(senderAge/2+7)) continue;
            if (receiverAge>senderAge) continue;
            if (receiverAge>100&&senderAge<100) continue;
            int requests=ageFrequencies[senderAge]*ageFrequencies[receiverAge];
            if (senderAge==receiverAge) 
            {
                requests-=ageFrequencies[senderAge];
            }
            totalFriendRequests+=requests;
        }
    }
    return totalFriendRequests;
}

    