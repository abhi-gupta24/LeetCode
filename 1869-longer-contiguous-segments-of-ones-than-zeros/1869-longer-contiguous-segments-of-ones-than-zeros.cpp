//TC - O(n), SC- O(1)


class Solution {
public:
    bool checkZeroOnes(string s) 
    { 
        // for 0's
        int count_0 = 0;
        int maxCount_0 = 0;
        
        // for 1's
        int count_1= 0;
        int maxCount_1= 0;
        
        for(int i= 0; i< s.size(); i++)
        { 
            // count (maximum) longest contiguos of 1's
            if(s[i]== '1')
            {
                count_1 ++;
            }
            else
            {
                count_1 = 0;
            }
            maxCount_1 = max(maxCount_1, count_1);
            
            
            // count (maximum) longest contiguos of 0's
            if(s[i]== '0')
            {
                count_0 ++;
            }
            else
            {
                count_0 = 0;
            }
            maxCount_0 = max(maxCount_0, count_0);
            
            
        }
        
        //compare maximum contiguos count of 0's and 1's
           // if(maxCount_1 > maxCount_0)
           //  {
           //      return true;
           //  }
           //  else                           // if maximum count of 1's is less than or equal to maximum count of 0's
           //  {
           //      return false;
           //  }
        
              //OR
        
        return maxCount_1 > maxCount_0 ;
    }
};