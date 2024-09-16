class Solution {
public:
    int findMinDifference(vector<string>& nums) {
       for(int i = 0 ; i<nums.size() ; i++)
{
    if(nums[i].substr(0,2) == "00" )
    {
        string num_str ="24:" + nums[i].substr(3,2);
        nums[i] = num_str;
    }
}

sort(nums.begin() , nums.end());
vector<int> arr;

for(int i =0 ; i<nums.size() ; i++)
{

    int n1 = stoi(nums[i].substr(0,2));
    int n2 = stoi(nums[i].substr(3,2));
    int total_min = ((n1*60)+n2);
    arr.push_back(total_min);
}

sort(arr.begin()  , arr.end());

int i = 0  ; int j = 1;
int min_diff = 100000;

while(j<arr.size())
{
    int difference = arr[j]-arr[i];
    min_diff = min(min_diff , difference);
    i+=1;
    j+=1;

}

cout<<min_diff<<endl;

return min(min_diff , 24*60 - arr[arr.size()-1] + arr[0]);

    }
};