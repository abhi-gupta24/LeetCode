class Solution 
{
 public:
    int squareDigit(int temp)
    {
        int sum = 0;
        
        while(temp !=0)
        {
            int rem = temp%10;
            sum += rem*rem;
            temp = temp/10;
        }
        
      return sum;
    }
    
    bool isHappy(int n) 
    {
        int temp = n;
        
         // 44 → 32 → 13 → 10 → 1 → 1
         // 85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
         // Any chain that arrives at 1 or 89 will become stuck in an endless loop.
        
        while(1)                           // repeat the process untill the final sim is one
        {
            if(temp == 89)
            {
                return false;
            }
            
            if(temp  == 1)
            {
                return true;
            }
            
            temp = squareDigit(temp);
                
        }
    }

};




