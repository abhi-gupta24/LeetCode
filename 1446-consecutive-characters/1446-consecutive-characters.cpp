// TC - O(n), SC- O(1)

class Solution {
public:
    int maxPower(string s) 
    {
        int count = 1;               // since we are counting form first index we have to take 0 index elment in consideration
        int maxCount = 1 ;           // therefore count and maxCount is one intially
        
        for(int i = 1 ; i< s.size();i++)
        {
            if(s[i]== s[i-1])
            {
                count++;
            }
            else                    // if s[i]!=s[i-1]
            {
                count = 1;
            }
            
            maxCount = max(maxCount, count);
            
            //      OR
            // if(count > maxCount)
            // {
            //     maxCount = count;
            // }
        }
       return maxCount; 
    }
};