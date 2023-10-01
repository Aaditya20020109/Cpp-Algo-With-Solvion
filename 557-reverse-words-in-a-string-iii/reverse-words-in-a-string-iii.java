class Solution {
 
    public String reverseWords(String s) {
      StringBuilder sb =new StringBuilder();
      int i=0;
      int ch =0;
      for(int j=0;j<s.length()+1;j++)
      {
        if(j!=s.length()) {ch = (int)s.charAt(j);}
        if(ch==32||j==s.length())
        {
          StringBuilder sb_1 = new StringBuilder(s.substring(i,j));
         sb_1 =sb_1.reverse();
          sb.append(sb_1);
        if(j!=s.length())sb.append(" ");
          i=j+1;
          
        }
        
      }
      
      return sb.toString();
        
    }
}