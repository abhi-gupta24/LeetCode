class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int count = 0;
        int num = x^y;      // 1 ^ 4 = 5 i.e. - 0100
        
        while(num != 0)     
        {
            if(num & 1)     // num & 1 != 0  (if set bit is present)
            {
                count ++;
            }
            num >>= 1;     // remove right bit after each iteration
        }
        
       return count; 
    }
};



     // OR

// for(int num = x^y; num != 0; num >>= 1)
//         {
//              if(num & 1)     // num & 1 != 0  (if set bit is present)
//             {
//                 count ++;
//             }
//         }
    
    