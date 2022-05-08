// TC - O(n), SC - O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int maxProduct = nums[0];
        int currentMax = nums[0];
        int currentMin = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            
            if(nums[i] == 0)
            {
                currentMax = 0;
            }

               int temp = currentMax;
               currentMax = max({nums[i], nums[i]*currentMax, nums[i]*currentMin});
               currentMin = min({nums[i], nums[i]*temp, nums[i]*currentMin});
            
               maxProduct = max(maxProduct,currentMax) ;   
        }
        
        return maxProduct;
    }
};

