// Dutch National flag algorithm


class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int low = 0;
        int mid = 0;
        int high = nums.size()-1;
 
        
        while(mid <=  high)
        {
            switch( nums[mid])
            {
              // Here mid is 0
                 case 0:
                    swap(nums[low++],nums[mid++]);
                    break;
              
              // Here mid is 1        
                case 1:
                    mid++;
                    break;
                  
              // Here mid is 2        
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};