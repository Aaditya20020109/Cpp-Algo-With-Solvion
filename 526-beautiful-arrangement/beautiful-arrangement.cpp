class Solution {
public:
int count = 0;
void helper(vector<int> nums , int l)
{
if(l == nums.size())
{
    count++;
    
}
for(int i = l ; i<nums.size() ; i++)
{
        swap(nums[i]  , nums[l]);
        if(nums[l]% (l+1) ==0 || (l+1) % nums[l] == 0)
        {
            helper(nums , l+1);
        }
        swap(nums[i]  , nums[l]);
}

}
int countArrangement(int n) {

vector<int> v;

for(int i=1 ; i<=n;i++)
{
v.push_back(i);
}
helper(v,0);

return count;



}
};