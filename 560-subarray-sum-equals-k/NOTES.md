​
// Brut force approach
// TC - O(n^2), SC - O(1)
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int count = 0;
        
        for( int i =0; i < nums.size(); i++)
        {
            int sum = nums[i];
            
            if(sum == k)         // if first element is equal to k then also incremnet
            {
                count++;
            }
            
            for( int j = i+1; j < nums.size(); j++)
            {
                sum +=  nums[j];
                
                if(sum == k)
                {
                    count++;
                }
            }
        }
       return count; 
    }
};
