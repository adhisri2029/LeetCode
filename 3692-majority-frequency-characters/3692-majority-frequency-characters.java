class Solution {
    public String majorityFrequencyGroup(String s) {
        Map<Character,Integer> map = new HashMap<>();

        for(Character k : s.toCharArray())
        map.merge(k,1,Integer::sum);

        Set<Character> setChar = new HashSet<>();
        for(Character k : s.toCharArray())
        setChar.add(k);

        Set<Integer> setFreq = new HashSet<>();
        for(Character k : setChar)
        setFreq.add(map.get(k));
        List<Integer> listFreq =  new ArrayList(setFreq);
        String ans[] = new String[setFreq.size()];
        for(int i=0;i<setFreq.size();i++)
        ans[i] = " ";
        for(int i=0;i<setFreq.size();i++)
        for(Map.Entry<Character,Integer> e : map.entrySet())
        if(listFreq.get(i) == e.getValue())
        ans[i] = ans[i] + String.valueOf(e.getKey());
        int anslen[] = new int[setFreq.size()];
        int i=0;
        for(String sk : ans)
        anslen[i++] = sk.trim().length();

        int m = Arrays.stream(anslen).max().getAsInt();

        List<String> fin = new ArrayList<>();

        for( i = 0;i< anslen.length;i++)
        if(anslen[i] == m)
        fin.add(ans[i].trim());
        if(fin.size() == 1)
        return fin.get(0);
        int max = Integer.MIN_VALUE;
        int p = -1;
        for( i=0;i<fin.size();i++)
        for(Map.Entry<Character,Integer> e : map.entrySet())
        if(fin.get(i).charAt(0) == e.getKey())
        if(e.getValue() > max)
        {
        max = e.getValue();
        p = i;
        }
        return fin.get(p);


        
    }
}