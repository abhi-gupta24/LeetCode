// TC - O(nlogn), SC - O(n)

class Solution {
public:
    int minimumSum(int num) 
    {
      vector<int> arr;

        while(num!= 0)
        {
            int a = num%10;
            num = num/10;
            arr.push_back(a);
        }
        
        sort(arr.begin(),arr.end());
        
         int res = (10*arr[0]+arr[2]) + (10*arr[1]+arr[3]);
        
        return res;
    }
};