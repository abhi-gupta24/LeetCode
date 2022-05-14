class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) 
    {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        
        int sub_sum = 0;
        vector<int>ans;
        sort(nums.begin(), nums.end(), std::greater<>());
        
        for(int i = 0; i < nums.size(); i++)
        {
            sub_sum += nums[i];         // sub_sum = sub_sum + nums[i]
            sum -= nums[i];             // sum = sum - nums[i]
            ans.push_back(nums[i]);
            
            if(sub_sum > sum)
            {
                break;
            }
        }
       return ans; 
    }
};


