class Solution 
{
 private:
    bool isSelfDiv(int num)
    { int n =num;
        while(num > 0)              // or while(nums!= 0)
        {
            int rem = num%10;
            num = num/10;
            
            if(rem == 0 || n%rem != 0)
            {
                return false;
            }
        }
       // else
       return true; 
    }
    
    
 public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
            vector<int>ans;
        for(int i = left; i<= right; i++)
        {
            if(isSelfDiv(i))
            {
                ans.push_back(i);
            }
        }
       return ans; 
    }
};