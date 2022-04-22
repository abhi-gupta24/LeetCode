class Solution {
public:
    bool hasAlternatingBits(int n)
    {
        int num = n&1;  
        
        while( n != 0)
        {
            n >>= 1;
            
            int x = n&1;
            
            if( num == x)
            {
                return  false;
            }
            
            num = x;
        }
       return true; 
    }
};