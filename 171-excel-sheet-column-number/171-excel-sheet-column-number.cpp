class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int n = columnTitle.size();
        int ans = 0;
        if(n == 1)
        {
            ans = (columnTitle[0]-'A') + 1; 
            return ans;
        }
        
        int base = 0;
        for(int i = n-1; i >= 0; i--)
        {
            int x = (columnTitle[i] - 'A') + 1;
            ans = ans + (x * pow(26,base));
            base ++;
        }
       return ans; 
    }
};

