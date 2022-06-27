class Solution {
public:
    int largestCombination(vector<int>& candidates) 
    {
        int res = 0;
        int cur = 0;                                     // count 1's
        
        for (int i = 1; i <= 10000000; i <<= 1) 
        {
            cur = 0;                                    // for each element counting of 1's starting with 0
            for (int j = 0; j< candidates.size(); j++)
            {
                if (candidates[j] & i)                 // candidates[j] & i == 1
                {
                    cur++;
                }
           }
            res = max(res, cur);                      // maximum number of 1's from combinations of elements
        }
        return res;        
        
    }
};