// TC- O(nlogn), SC - O(1)
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) 
    {                                                // [9,4,1,7]   k =2
        sort(nums.begin(),nums.end());               // [1,4,7,9]   k =2
        int ans = nums[k-1] - nums[0];               // int ans = nums[2-1] - nums [0] = 4-1 = 3
        
        for(int i = k; i<nums.size();i++)
        {
            ans = min(ans, nums[i]- nums[i - k+1]);
        }
      return ans;
    }
};