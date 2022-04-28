class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums)
    {
        string places[3] {"Gold Medal", "Silver Medal", "Bronze Medal"};
        vector<string> res(nums.size());
        vector<int> pos(nums.size());
        
        for (int i = 0; i < nums.size(); i++)
            pos[i] = i;
        
        sort(pos.begin(), pos.end(),
             [nums] (int i, int j) { return nums[i] > nums[j]; });
        
        for (int i = 0; i < nums.size(); i++)
            res[pos[i]] = i < 3 ? places[i] : to_string(i + 1);
        
        return res;
    }
};