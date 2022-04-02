// class Solution {
// public:
//     vector<int> selfDividingNumbers(int left, int right)
//     {
//         vector<int> ans;
//         while(left <= right)
//         {
//             int temp = left;
//             int a = left;
//             int rem = a%10;
//             // a = a/10;
//              a /=10;
//             if( rem ==0)
//             {break;
//             }
//              if(temp%rem == 0)
//              {
//                  ans.push_back(temp);
//              }
//         }
//        return ans;
//     }
// };
​
​
class Solution {
public:
// Helper function to check if a number is self dividing or not
bool isSelfDividing(int num) {
int n = num, digit;
while (n) {
digit = n%10;
if (digit == 0 || num % digit) return false;
n /= 10;
}
return true;
}
vector<int> selfDividingNumbers(int left, int right) {
vector<int> res;
// Check each number in the range
for(int i = left; i<=right; i++) {
if (isSelfDividing(i))
res.push_back(i);
}
return res;
}
};