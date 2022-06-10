class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k)
    {
        long long sum = 0;
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < n; i++)
        {
            // if first element is less than or equal to k
            if(i==0)
            {
                
                if(nums[i]<=k)
                {
                    sum += nums[i];
                    k++;
                }
                else
                {
                    break;
                }
                
            }
            
            else
            {
                
                if(nums[i] == nums[i-1])
                {
                    continue;
                }
                if(nums[i] > k)
                {
                    break;
                }
                
                sum += nums[i];
                k++;
            }
        }
        
        long long ans = ((long long)k*(k+1))/2 - sum;        
        return ans;
    }
};