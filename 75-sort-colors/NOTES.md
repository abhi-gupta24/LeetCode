​
**Method 2: keep a count of 0's 1's and 2's**
Time complexity - O(2N)
S.c. - O(1)
​
class Solution {
public:
void sortColors(vector<int>& nums) {
int count0 = 0;
int count1 = 0;
int count2  = 0;
for(int i =0; i< nums.size(); i++){
if(nums[i] == 0){
count0++;
}else if (nums[i] == 1){
count1++;
}else if (nums[i] ==2 ){
count2++;
}
}
for(int i =0; i< count0; i++){
nums[i] =0;
}
for(int i =count0; i< (count1 + count0); i++){
nums[i] =1;
}
for(int i =(count1 + count0); i< nums.size(); i++){
nums[i] =2;
}
}
};
​
**Method 3: Dutch National flag algorithm ( using 3 pointers)**
Time complexity - O(N)
S.c. - O(1)
​
class Solution {
public: