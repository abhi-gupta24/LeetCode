// TC - O(n), SC- O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int ans = nums[0];
        for(int i = 1; i<nums.size(); i++)
        {
            // ans = ans ^ nums[i];
            ans ^= nums[i];
        }
       return ans; 
    }
};