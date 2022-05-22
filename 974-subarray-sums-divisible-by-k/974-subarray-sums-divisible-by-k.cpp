class Solution {
public:
     int subarraysDivByK(vector<int>& A, int K) 
     {
        vector<int> count(K);
        count[0] = 1;
        int prefix = 0;
         int res = 0;
        for (int i = 0; i < A.size(); i++)
        {
            prefix = (prefix + A[i] % K + K) % K;
            res += count[prefix]++;
        }
       return res;
    }
};