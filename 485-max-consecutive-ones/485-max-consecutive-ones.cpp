// TC - O(n), SC - O(1)


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int count = 0;
        int maxCount = 0;
        
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else                    // nums[i] == 0
            {
                count  = 0;
            }
            
            maxCount = max(maxCount, count);
        }
       return maxCount; 
    }
};