// Brut force approach
//TC - O(n^2), SC - O(n)
​
class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums)
{
vector<int> answer(size(nums) ,1);
for(int i = 0; i < nums.size(); i++)
{
for(int j = 0; j <nums.size(); j++)
{
if(i == j)
{
continue;
}
answer[i] = answer[i]*nums[j];
}
}
return answer;
}
};