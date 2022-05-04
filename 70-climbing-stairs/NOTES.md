class Solution {
public:
int climbStairs(int n)
{
if(n == 1)
{
return 1;   // if one stair then number of way is one
}
else if(n == 2)
{
return 2;  // if two stairs then number of way is two i.e. 1+1 steps and dirsct 2 steps
}
// last step will be either from n-1 th or n-2 th stairs to reach at the top
return climbStairs(n-1) + climbStairs(n-2);
​
}
};