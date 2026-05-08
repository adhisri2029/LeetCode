class Solution 
{
    public int maxFrequencyElements(int[] nums) 
    {
        Map<Integer,Integer>map = new HashMap<>();
        for (Integer k:nums)
        map.put(k,map.getOrDefault(k,0)+1);
        int max=0;
        for(Integer k:map.keySet())
        max=Math.max(max,map.get(k));
        int count=0;
        for(Integer k:map.keySet())
        if(map.get(k)==max)
        count+=max;
        return count;
    }
}