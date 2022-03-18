//Moore's algorithm
// TC - O(n) SC- O(1)


class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int count = 0;
        int element = 0;
        
        for(int i= 0; i<nums.size(); i++)
        {
            if(count == 0)
            {
                element  = nums[i];
            }
            
            if(nums[i] == element)        // whem next element is  equal to stored element
            {
                count +=1;
            }
            else                           // whem next element is not  equal to stored element 
            {
                count -=1;
            }
        }
        
       return element;        
    }
};