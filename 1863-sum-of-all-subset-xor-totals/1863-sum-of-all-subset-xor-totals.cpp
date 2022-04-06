class Solution {
public:

    int XORcounter=0;
    void solve(vector<int>nums, int n)
    {
        if(nums.size()==0)
        {
            XORcounter+=n;
            return;
        }
        int n1 = n;
        int n2 = n ^ nums[0];
        nums.erase(nums.begin()+0);
        solve(nums,n1);
        solve(nums,n2);
    }
    int subsetXORSum(vector<int>& nums) {
        solve(nums,XORcounter);
        return XORcounter;
    }
};

