}
return maxi;
}
};
​
​
​
// int findMaxLength(vector<int>& nums) {
//         int n = nums.size();
//         int one = 0, zero = 0;
//         int maxl = 0;
//         for(int i = 0 ; i < n; i++){
//             for(int j = i ; j < n ; j++){
//                 if(nums[j] == 1) one++;
//                 else zero++;
//                 if(one == zero){
//                     int curr_len = one+zero;
//                     maxl = max(maxl,curr_len);
//                 }
//             }
//             one = 0,zero = 0;
//         }
//         return maxl;
//     }
----------
// TC - O(n),  SC - O()
​
​
​
// TC - O(n), SC - O(n)
class Solution {
public:
int findMaxLength(vector<int>& nums)
{
vector<int> arr(2*(n + 1), n+1);
arr[n] = -1;