//T.C. - O(n^2)  (Brut force appraoch)
//S.C. - O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        // x + y = target
        vector<int>result;
        
        for(int i=0; i<nums.size(); i++)
        {
            
            for(int j =i+1 ; j<nums.size(); j++)
            {
                    // x + y = target
                if( nums[i] + nums[j] == target)
                {
                    result.push_back(i);  // x
                    result.push_back(j);  // y
                    break;
                }
            }
            
        }
        
        return result; 
        
    }
};


//OR


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) 
//     {
//         // x + y = target
//         //nums[i] + nums[j] = target
//         vector<int>result;
        
//         for(int i=0; i<nums.size(); i++)
//         {
//             int y = target - nums[i];      // y = target - x
            
//             for(int j =i+1 ; j<nums.size(); j++)
//             {
//                 if( nums[j] == y)
//                 {
                    
//                     result.push_back(i);  // x
//                     result.push_back(j);  // y
//                     break;
//                 }
//             }
            
//         }
        
//         return result; 
        
//     }
// };