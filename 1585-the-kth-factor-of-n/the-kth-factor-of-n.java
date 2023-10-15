class Solution {
    public int kthFactor(int n, int k) {
      // ArrayList<Integer> a = new ArrayList<>();
      int factor = -1;
      for(int i=1;i<=1000;i++)
      {
        if((n%i)==0)k--;
        if(k==0){factor=i;break;}
        
      }
      return factor;  
    }
}