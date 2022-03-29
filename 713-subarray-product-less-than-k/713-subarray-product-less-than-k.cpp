// Optimal approah = sliding window
// TC -O(n), SC - O(1)

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if (k <=1)                              // edege case (optional)
        {
            return 0;
        }
        
        int i = 0;
        int j = 0;
        int count = 0;
        int product = 1;
        
        while(j < nums.size())
        {
            product *= nums[j];
            while (i <= j && product >= k) 
            {
                product /= nums[i];                           // product /= nums[i++];
                i++;
            }
            
            if(product < k)
            {
                count += j - i + 1;
                j++;
            }
        }
        return count;
    }
};