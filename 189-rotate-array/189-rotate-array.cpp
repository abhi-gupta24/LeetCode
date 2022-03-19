//Optimal solution
//TC - O(n), SC - O(1)


class Solution 
{ private :
 
    // reverse function
    void reverse(vector<int>& nums, int low ,int high)
    {    
        int n  = nums.size();
        
        while( low < high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
 
public:
    
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();           // n = 7
                                       // k =3  
        
        // if k is greater than n 
        //eg :- if k = 10 , n = 7  (after n rotation  the array become same as )
        // that means only 3 roations is required
        
          k = k%n;       // k = 10 % 7 = 3
                                      //                  k=3
                                      //                  <---->
                                      // nums = [1,2,3,4,|5,6,7|]
                                     //  i =     0       n-k  n-1        
                                             
        reverse(nums, 0, n-k-1);     //  nums = [4,3,2,1 |,5,6,7]
        reverse(nums,n-k, n-1);     //   nums = [4,3,2,1 |,7,6,5]
        reverse(nums,0, n -1);      //   nums = [5,6,7,1,2,3,4]
        
    }
};