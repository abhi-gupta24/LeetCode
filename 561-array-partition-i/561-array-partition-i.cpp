//TC - O(nlogn), SC- O(1)


class Solution {
public:
    int arrayPairSum(vector<int>& nums)
    {                                        // nums = [1,4,3,2]
        sort(nums.begin(),nums.end());       // nums = [1,2,3,4,5,6]
        int sum = 0;
                                            //  since the array is sorted first element of each pair is min ;                     
        for(int i = 0 ; i<nums.size(); i+=2)       //(1,2), (3,4), (5,6)
        {
            sum += nums[i];                     // sum = 1+3+5 = 9
        }
       return sum; 
    }
};