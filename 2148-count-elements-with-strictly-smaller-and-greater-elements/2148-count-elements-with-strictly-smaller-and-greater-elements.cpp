class Solution {
public:
    int countElements(vector<int>& nums) 
    { 
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i = 0; i < nums.size(); i++)
        {
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);
        }
        
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > mini && nums[i] < maxi)
            {
                count++;
            }
        }
        return count;
        
        
    }
};

