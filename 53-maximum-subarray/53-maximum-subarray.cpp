// Kadane's algorithm


class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int maxSum = INT_MIN;   //or   int maxSum = nums[0];
        int currentSum = 0;
        
        for(int i =0; i<nums.size(); i++)
        {
            currentSum = currentSum + nums[i];
            
            if(currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            
            // if current sum of subarry is less than 0 or nagative then discard that subarray, make                   current sum zero and start subarray with next element 
            if( currentSum < 0)       
            {
                currentSum = 0;    
            }
            
        }
        
       return maxSum; 
        
    }
};