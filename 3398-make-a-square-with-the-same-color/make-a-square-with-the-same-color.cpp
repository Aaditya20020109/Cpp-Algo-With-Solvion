class Solution {
public:
    bool check(char first,char second,char third,char fourth)
    {
      int w_s = 0,b_s = 0;
      
      if(first == 'B')b_s++;
       if(first == 'W')w_s++;
      
       if(second == 'B')b_s++;
       if(second == 'W')w_s++;
      
      
       if(third == 'B')b_s++;
       if(third == 'W')w_s++;
      
      if(fourth == 'B')b_s++;
       if(fourth == 'W')w_s++;
      
      
      if(w_s < b_s)
      {
            if(w_s == 0 || w_s == 1)return true;
           

      }

      if(w_s > b_s)
      {
        if(b_s == 0 || b_s == 1)return true;
      }


      return false;
      

    }
    bool canMakeSquare(vector<vector<char>>& grid) {
      
     
      
      
      return(   check(grid[0][0],grid[1][1],grid[0][1] , grid[1][0]) 
             || check(grid[1][0],grid[2][1],grid[2][0] , grid[1][1])
             || check(grid[1][2],grid[1][1],grid[2][1] , grid[2][2])
             || check(grid[0][1],grid[1][2],grid[1][1] , grid[0][2])   );
      
      
        
    }
};