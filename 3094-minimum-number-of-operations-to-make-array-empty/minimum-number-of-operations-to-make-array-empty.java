class Solution {
    public static int Count(int n )
    {
        int count =0;
        while(n%3!=0)
        {
            n-=2;
            count++;
        }

        count+=(n/3);
        return count;
        
    }
    public int minOperations(int[] nums) {
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int key : nums)
            hm.put(key, hm.getOrDefault(key, 0) + 1);
        int ans = 0;
       for(int key:hm.keySet())
       {
          
           int value = hm.get(key);
           if(value<2)return -1;
           ans+=Count(value);
       }
       return ans;
    }
}
