class Solution {
public:
    bool check(vector<int>& nums)
    {
        int n = nums.size();
        int count = 0;
        
        for( int x = 0; x < nums.size(); x++)
        {
            if(nums[x] > nums[(x+1)%n])
            {
                count ++;
            }
        }
        if( count > 1)
        {
            return false;
        }
       return true; 
    }
};


// if array is sorted and rotated then, there is only 1 break point where (nums[x] > nums[x+1]),
// if array is only sorted then, there is 0 break point.

// nums[(x+1)%n] 

// (0+1)%5 = 1%5 = 1
// (1+1)%5 = 2%5 = 2
// (2+1)%5 = 3%5 = 3
// (3+1)%5 = 4%5 = 4 
// (4+1)%5 = 5%5 = 0
    
// input = [3,4,5,1,2]    
// x-> num[x]  num[(x+1)%n]

// 0   3       4
// 1   4       5
// 2   5  >    1
// 3   1       4
// 4   2       3         
    