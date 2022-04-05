class Solution {
public:
    bool checkPowersOfThree(int n) 
    {
        if(n == 1)                   // base case ( when n becomes one after continous divsions of quotient by 3)
        {
            return true;
        }
        
        if( n%3 == 2)        // if n is summation of power of 3 , then remainder can be (3^0 == 1) but  
        {                    // if n is summation of power of 3 then reainder can't be 2
            return false;
        }
        
      return checkPowersOfThree(n/3);  // divide the quotuient (n = n/3) untill n == 1 
    }
};