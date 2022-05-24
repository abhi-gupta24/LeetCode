class Solution {
public:
    bool canArrange(vector<int>& arr, int k) 
    {
        int n=arr.size();
        vector<int> rem(k,0);
        
        for(int i=0;i<n;i++)
        {
            int t=(arr[i]%k+k)%k;
            rem[t]+=1;
        }
        
        if(rem[0]%2!=0)
        {
            return false;
        }
        
        for(int i=1;i<=k/2;i++)
        {
            if(rem[i] != rem[k-i])
                return false;
        }
        return true;
    }
};