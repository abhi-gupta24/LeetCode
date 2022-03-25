// Brute force approach
// TC - O(nlogn), SC - O(1)




class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n = nums.size();                             // n = 6
        sort(nums.begin(),nums.end());                   //[3,2,1,5,6,4] ---->  [1,2,3,4,5,6]
        
        return nums[n-k];                                // nums[6-2] ----> nums[4] ---> 5
        
        
    }
};