T.C - O(n),  S.C. - O(n)
​
​
class Solution {
public:
int trap(vector<int>& height)
{
int n = height.size();
int *left = new int[n];
int *right = new int[n];
for(int i = 1; i < n; i++)
{
left[i] = max(height[i-1], height[i]);
}
for( int i = n-2; i >= 0; i--)
{
right[i] = max(height[i+1], height[i]);
}
int ans = 0;
int mini;
for(int i = 0; i < n; i++)
{
mini = min(left[i],right[i]);
ans = mini - height[i];
}
return ans;
}
};