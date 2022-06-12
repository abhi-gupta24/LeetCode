class Solution {
public:
    int largestPerimeter(vector<int>& nums) 
    {
        // let a,b and c are sides of triangel
        //  if a+b > c   -----> then only trainlge possible
        sort(nums.begin(),nums.end());
        
        for(int i = nums.size()-1; i >=2; i--)
        {
            if(nums[i] < nums[i-1] + nums[i-2])
            {
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
       return 0; 
    }
};

