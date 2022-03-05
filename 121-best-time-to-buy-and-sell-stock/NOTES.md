**1st approach (brut force)
T.C. -O(n^2)  S.C.- O(1)**
​
​
class Solution {
public:
int maxProfit(vector<int>& prices)
{  int n = prices.size();
int max_Profit = 0;
for(int i=0;i<n ;i++)
{
for(int j=i+1;j<n ;j++)
{
if(prices[j]>prices[i])
{
int current_price = prices[j]-prices[i];
max_Profit = max(current_price, max_Profit);
}
}
}
return max_Profit;
}
};
​
​
**optimal solution ( similar to kadane's algorithm)
T.C.- O(N)   S.C. - O(1)**
class Solution {
public:
int maxProfit(vector<int>& prices)
{
int minPrice = INT_MAX;  // or prices[0]
int maxProfit = 0;
for(int i=0;i<prices.size();i++)
{
// buy at min price
minPrice = min(minPrice,prices[i]);
// sell at evreyday and check  current profit
int current_profit = prices[i] - minPrice;
//check all days current profit and get amximum profit out of those
maxProfit = max(current_profit,maxProfit);
}
return maxProfit;
}
};
​