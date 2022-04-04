class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        while(n >= 3)
        {
                if(n%3 !=0)
                {
                    return false;
                }
                n /= 3  ;                    //int n = n/3
        }
       // return true; 
        // or
        return n == 1;
    }
};


// logic -
    
    // divide number untill quotient is eqial to one ,then only number is perfect cube