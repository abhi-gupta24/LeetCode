// Optimal approach
// TC - O(n), SC - O(n)


class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n+1);
        for(int i =0; i<=n; i++)
        {
            if(i%2 == 0)                       // if n is even then LSB (least signifiacnt bit) bit is zero
            {
               ans[i] = ans[i/2];  
            }
            else                            // if n is odd then LSB (least signifiacnt bit) bit is 1 that's why adding         
            {                               // extra one
                ans[i] = ans[i/2]  + 1; 
            }
        
        }
       return ans; 
    }
};


