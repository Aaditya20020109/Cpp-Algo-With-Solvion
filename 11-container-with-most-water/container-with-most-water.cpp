class Solution {
public:
    int maxArea(vector<int>& height) {
        // two pointer
        int maxArea = 0 ;
        int i =0 ;
        int j = height.size() - 1;

        while(i<j)
        {
            int height1 = min(height[i] , height[j]);
            int width = abs(j-i);
            int area = height1 * width;
            maxArea = max(maxArea , area);
            if(height[i]>height[j])
            {
                j-=1;
            }

           else{
                i+=1;
           }
        }

        return maxArea;
        
    }
};