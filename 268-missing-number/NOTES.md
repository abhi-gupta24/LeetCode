//APPROACH 1ST -
// TC- O(nlogn) (if merge sort is used) , SC - O(1)
// optimal approach when array is already sorted
// then TC - (logn)
​
​
class Solution {
public:
int missingNumber(vector<int>& nums)
{
sort(nums.begin(), nums.end());
int s = 0;
int e = nums.size();
while( s<=e)
{
int mid = s + (e-s)/2;
if(nums[mid] > mid)
{
e = mid -1;
}
else
{
s = mid + 1;
}
}
return s;
}
};
--------------------------
// APPROACH 2ND
// TC - O(n), SC - O(1)
// BUT MIGHT GET OVERFLOW ERROR DUE TO HUGE SUMMATION
​
class Solution {
public:
int missingNumber(vector<int>& nums)
{
int n = nums.size();
int sum = n*(n+1)/2;      // sum all the element  from 1 to n
for(int i = 0; i < n ; i++)
{
sum -= nums[i];      // subtract each elment from sum the left value of sum will be the missing number
}
return sum;
}
};
​
​
​