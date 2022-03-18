**Brut force approch (count occurences)
TC - O(n^2) SC - O(1)**
​
​
class Solution {
public:
int majorityElement(vector<int>& nums)
{
int index;
int maxCount = 0;
for(int i= 0 ;i<nums.size(); i++)
{
int count = 0;
for(int j= i+1; j<nums.size();j++)
{
if(nums[i]==nums[j])
{
count++;
}
}
​
if(count > maxCount )
{
maxCount = count;
index = i ;
}
//      OR
//   maxCount = max(maxCount, count);
//   int index = i;
}
return nums[index];
}
};