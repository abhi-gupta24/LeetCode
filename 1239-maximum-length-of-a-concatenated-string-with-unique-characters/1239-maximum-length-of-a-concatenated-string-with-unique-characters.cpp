class Solution {
public:

    int sol=0;
    void solve(vector<string>& arr, vector<int>& count, int i, int &ans)
    {
        if(i==arr.size())
        {
            sol=max(sol, ans);
            return;
        }
        //recursive without adding string
        solve(arr, count, i+1, ans);
        
        //adding string
        for(int k=0; k<arr[i].length(); k++)
        {
            if(count[arr[i][k]-'a']>0)
            {
                //deleting the previous added elements from count
                for(int j=0; j<k; j++)
                    count[arr[i][j]-'a']--;
                return;
            }
            count[arr[i][k]-'a']++;
        }
        ans+=arr[i].length();
        
        //recursive with added string
        solve(arr, count, i+1, ans);
        
        //backtracking
        ans-=arr[i].length();
        for(int k=0; k<arr[i].length(); k++)
        {
            count[arr[i][k]-'a']--;
        }
    }
    
    int maxLength(vector<string>& arr)
    {
        sol=0;
        int ans=0;
        //vector to store count of elements
        vector<int> count(26, 0);
        solve(arr, count, 0, ans);
        return sol;
        
    }
};