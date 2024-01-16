class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxi =0;
        vector<int> left(n);
        vector<int> right(n);
        left[0] =  height[0];
        right[n-1] = height[n-1];
        for(int i=1;i<n;i++)
        {
            left[i] = max(left[i-1],height[i]);
            cout<<left[i]<<" ";
        }
    cout<<endl;
        for(int i=n-2;i>=0;i--)
        {
            right[i] = max(right[i+1],height[i]);
            cout<<right[i]<<" ";
        }
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            int height = min(left[i],right[j]);
            int width = abs(i-j);
            int area = height*width;
            maxi = max(area,maxi);
            if(left[i]<right[j])i++;
            else if(left[i]>right[j])j--;
           else { i++;
            j--;}


        }
        return maxi;
        
    }
};