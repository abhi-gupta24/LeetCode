// Optimal approach - Two pointer approach
// TC - O(n^2), SC - O(n)

    //LOGIC -
// if sum of two sides of triangle is greater than third side than it would be consider as valid triangle 
// ( a,b and c are three sides of triangle)
//  a + b > c (valid triangle condtion)

class Solution {
public:
    int triangleNumber(vector<int>& nums) 
    {
        // sorted the array so the sides get in increasing order
        sort(nums.begin(),nums.end());
        //store the count of valid triangles
        int count = 0;
        
        
        for(int i=2; i<nums.size();i++)
        {
            // we have started from index 2 so that the index 0 and index 1 elements 
	        // can be considered as left (a) and right(b) sides length
            int left = 0;
            int right = i-1;
            
            while(left < right)
            {
                if(nums[left] + nums[right] > nums[i])      // a + b > c
                {
                                                // if the element at Left and Right index satisfy our required
                   count += (right - left);
                    right--;                     //condition all the elements between Lth index and Rth index                                                                  //satisfy the same condition too since the array is in increasing                                                              //order
                }
                
                else
                {
                    left++;
                }
                
                
            }
        }
      return count;  
    }
};