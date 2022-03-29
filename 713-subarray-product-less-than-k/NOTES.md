// Brut force approach
// TC - O(n^2), SC- O(1)
​
​
class Solution {
public:
int numSubarrayProductLessThanK(vector<int>& nums, int k)
{
int count = 0;
for(int i =0;i<nums.size();i++)
{
if(nums[i]<k)
{
count++;                               // to count every starting element if it is less than k
}
int product = nums[i];
for(int j =i+1; j<nums.size() ;j++)
{
// product = product * nums[j];
product *= nums[j];
if(product < k)
{
count ++;                         // to count every subarray , if that subarray product is less than k
}
}
}
return count;
}
};
​
​
​