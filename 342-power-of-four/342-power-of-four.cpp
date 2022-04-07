class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        while( n > 1)
        {
            int rem = n%4;
            if(rem != 0)
            {
                return false;
            }
            n /= 4;                                // n = n/4;
        }
        
       return n == 1 ; // divide the number untill , it becomes 1 , then only it is power of 4
    }
};


