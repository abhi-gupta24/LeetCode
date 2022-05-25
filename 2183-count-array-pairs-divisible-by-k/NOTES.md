​// Brut force approach -T.c is O(n^2)

// class Solution {
// public:
//     long long countPairs(vector<int>& nums, int k)
//     {  long long int mul;
//         int count=0;
//          for(int i=0;i<nums.size();i++)
//          {
//              for(int j=i+1;j<nums.size();j++)
//              {     mul = nums[i]*nums[j];
//                  if((mul)%k==0)
//                  {
//                      count ++;
//                  }
//              }
//          }
        
//         return count;
//     }
// };
