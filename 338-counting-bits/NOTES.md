// Brut force approach
// TC - O(nlogn), SC - O(n)
​
class Solution {
public:
vector<int> countBits(int n)
{
vector<int> ans;
for(int i = 0 ; i<=n ;i++)
{
int num =i;
int count = 0;
while( num!=0)
{
count+= num&1;              //count = count + num&1
num >>= 1;                  // num = num>>1;
}
ans.push_back(count);
}
return ans;
}
};