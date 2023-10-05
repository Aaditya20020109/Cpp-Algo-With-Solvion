class Solution {

    public List<Integer> majorityElement(int[] nums) {
      //   int powerof2s = 0;
      //   int res = 0;
      // List<Integer> ll = new ArrayList<>();
      //   int range = nums.length / 3;
      //   for (int bits = 0; bits < 32; bits++) {
      //       int ones = 0, zeroes = 0;
      //       for (int element : nums) {
      //           if ((element & (1 << bits)) == 0) zeroes++; else ones++;
      //       }
      //       if (ones > range) {
      //           res += Math.pow(2, powerof2s);
      //       }
      //       powerof2s++;
      //   }
      HashMap<Integer,Integer> hm = new HashMap<>();
      List<Integer>ll = new ArrayList<>();
      for(int n:nums)
      {
        if(hm.containsKey(n))
        {
          hm.replace(n,hm.get(n)+1);
          
        }
        else hm.put(n,1);
      }
      for(int n:hm.keySet())
      {
        if(hm.get(n)>(nums.length/3))ll.add(n);
      }
      return ll;
      
   
     
    }
}
