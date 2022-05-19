class Solution {
public:
     int findLHS(vector<int>& nums) 
     {
        sort(nums.begin(), nums.end());
         
        int n = nums.size();
        int left =0;
        int right = 1;
        int ans = 0;
         
        while(right < n)
        {
            int difference = nums[right] - nums[left]; // why? because we have sorted the array
            if(difference == 1)
            {
              ans = max(ans, (right -left) +1);
            }
            
            
           if(difference <=1)
           { //if the difference occurs to be less than or equal to one then increment the right pointer
              right++;
           }
            
           else
           { //if the difference is greater than one then increment the left pointer
              left++;
           }
      }
    return ans;
}
};