class Solution 
{
    public int maxFrequencyElements(int[] nums) 
    {
        Map<Integer,Integer> map = new HashMap<>();
        
        for(Integer k : nums)
        map.merge(k,1,Integer::sum);

        Set<Integer> set = new HashSet<>();
        for(Integer k : nums)
        set.add(k);

        int freq[] = new int[set.size()];
        int i=0;
        for(Integer k : set)
        freq[i++] = map.get(k);

        int big = freq[0];
        for(int k : freq)
        if(k > big)
        big = k;
        
        int c = 0;
        for(int k : freq)
        if(k == big)
        c++;

        return c * big;
        

        
    }
}