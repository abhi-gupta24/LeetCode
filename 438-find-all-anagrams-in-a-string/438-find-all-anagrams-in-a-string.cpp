class Solution {
public:
    vector<int> findAnagrams(string s, string p)
    {
       int size_s = s.size();
       int size_p = p.size();
        
        if(size_s < size_p)
        {
            return {};
        }
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        //first window
         for(int i = 0; i < size_p; i++)
         {
             freq_p[p[i]-'a']++;
             window[s[i]-'a']++;
         }
        
        vector<int> ans;
        if(freq_p == window)
        {
            ans.push_back(0);
        }
        for(int i = size_p; i < size_s; i++)
        {
            window[s[i-size_p] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window)
            {
                ans.push_back(i - size_p +1 );
            }
        }
      return ans;  
    }
};