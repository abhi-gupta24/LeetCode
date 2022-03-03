//binary search approach


class Solution {
public:
    int mySqrt(int x) {
        
        //search space of root of x is between 0 to number x
        int s=0;
        int e=x;
        
        // to keep mid in long int range(64 bits) on multipilcation 
        long long int mid =s+(e-s)/2;
        int ans =-1;
        while(s<=e)
        {
            // to keep sqr in long int range(64 bits) on multipilcation
            long long int sqr=mid*mid;
            if(sqr==x)
            {
                
                return mid;
            }
            
            if(sqr<x)
            {
                // store mid in ans ,it could be possibel ans, because we are finding only integer                 part and ignoring decimal part
                //and integer part square root might be just less than actual value of            (integer+decimal part)
                    ans=mid;
                    s=mid+1;
            }
            
            else   // sqr>x
            {
                e=mid-1;
            }
            
            mid =s+(e-s)/2;
        }
        
        return ans;
        
        
    }
};