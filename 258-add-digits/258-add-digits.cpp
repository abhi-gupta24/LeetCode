//Recursion approach
//TC - O(n), SC - O(1)

class Solution {
public:
    int addDigits(int num) 
    {
        
        
        int sum = 0;
        int n =  num;
        while(n != 0)
        {
            sum += n%10;                                        // // sum += rem;
             n /= 10;                                           // n = n/10;
            
        }
        
            if(sum< 10)
           {
            return sum;
           }
           else                        // sum > 10
           {
            return addDigits(sum);
           }
        
    }
};