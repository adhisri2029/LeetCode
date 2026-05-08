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

        List<Integer> freq = new ArrayList<>();
        for(Integer k : set)
        freq.add(map.get(k));

        int m = freq.stream().max((a,b) ->Integer.compare(a,b)).get();

        int n = Collections.frequency(freq,m);

        return m * n;

        
    }
}