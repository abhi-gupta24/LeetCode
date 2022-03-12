**TC - O(n), SC - O(n)**
​
class Solution {
public:
void reverseString(vector& s) {
vector vec;
for(int i=s.size()-1;i>=0;i--)
{
vec.push_back(s[i]);
}
s=vec;
}
};
In a similar way you may also use a stack to solve the given problem
​
​
**TC - O(n), SC- O(1)
Two pointers approach(more space efficient)**
​
class Solution {
public:
void reverseString(vector& s) {
int start=0,e=s.size()-1;
while(start<e)
{
swap(s[start],s[e]);
start++;
e--;
}
}
};