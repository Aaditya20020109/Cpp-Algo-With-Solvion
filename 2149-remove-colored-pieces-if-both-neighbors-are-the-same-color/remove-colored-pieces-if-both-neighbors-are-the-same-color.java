class Solution {
    public boolean winnerOfGame(String colors) {
   // BEFORE SEE THE SOLUTION   // MAIN LOGIC BEHIND THIS PROBLEM IS ALICE AND BOB STEP IS PREDEFINED.
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      int a = 0;
      int b = 0;
      char ch[]=colors.toCharArray();
      for(int i=1;i<colors.length()-1;i++)
      {
        if(ch[i]=='A'&& ch[i-1]=='A'&&ch[i+1]=='A')a++;
        if(ch[i]=='B'&& ch[i-1]=='B'&&ch[i+1]=='B')b++;
        
      }
      boolean alice=true,bob=false;
      while(true)
      {
        if(alice)
        {
          if(a!=0)a--;
          else return false;
          alice=!alice;
          bob =!bob;
        }
        else if(bob)
        {
          if(b!=0)b--;
          else break;
          alice=!alice;
          bob =!bob;
        }
      }
      return true;
      
        
    }
}