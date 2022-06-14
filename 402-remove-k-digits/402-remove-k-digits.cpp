class Solution {
public:
    string removeKdigits(string num, int k) 
    {
        string res = "";
        
        for(char &ch : num)
        {
            // maintain res string with increasing order
            while(res.size() > 0 && k && res.back() > ch)
            {
                res.pop_back();
                k--;
            }
            
            // we should not add any zeros if res length is zero
            // because, it may lead to add zeros at the front that doesn't make sense       
            if(res.size() > 0 || ch != '0')
            {
                res.push_back(ch);
            }
        }
        
        // check if any k digits needs to remove
        while(res.size() && k)
        {
            res.pop_back();
                k--;
        }
        
        if(res.size() == 0)
        {
            return "0";
        }

        return res;
    }
};