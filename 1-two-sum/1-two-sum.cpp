class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // x + y = target
        //nums[i] + nums[j] = target
        vector<int>result;
        
        for(int i=0; i<nums.size(); i++)
        {
            int y = target - nums[i];      // y = target - x
            
            for(int j =i+1 ; j<nums.size(); j++)
            {
                if( nums[j] == y)
                {
                    
                    result.push_back(i);  // x
                    result.push_back(j);  // y
                    break;
                }
            }
            
        }
        
        return result; 
        
    }
};