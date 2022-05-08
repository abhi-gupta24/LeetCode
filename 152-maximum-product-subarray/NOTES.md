//Brut Forec approach
// TC -O(n^2), SC - O(1)
​
class Solution {
public:
int maxProduct(vector<int>& nums)
{
int maxPro = INT_MIN;
int pro = 0;
for(int i = 0; i < nums.size(); i++)
{
int currentPro = 1;
for(int j = i; j < nums.size(); j++)
{
currentPro *= nums[j];
maxPro = max(maxPro,currentPro);
}
}
return maxPro;
}
};