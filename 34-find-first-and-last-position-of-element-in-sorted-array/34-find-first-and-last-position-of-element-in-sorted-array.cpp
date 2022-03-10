class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
      return {BinarySearch(nums, target, "FIRST"), BinarySearch(nums, target, "LAST")};
    }
    
    int BinarySearch(vector<int> nums, int target, string find)
    {
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        int result = -1;

        while (left <= right) {
            mid = (left + right) / 2;

            if (nums[mid] == target)
            {
                result = mid;
                
                if(find=="FIRST")
                {
                    right = mid -1;
                }
                
                else if(find == "LAST")
                {
                    left = mid + 1;
                }
                
            }
            
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            
            else  //nums[mid] < target
            {
                left = mid + 1;
            }
        }

        return result;
    }    
    
};