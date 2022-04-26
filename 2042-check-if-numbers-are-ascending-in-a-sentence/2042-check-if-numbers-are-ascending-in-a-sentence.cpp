class Solution {
public:
    bool areNumbersAscending(string s)
    {
        int prev = -1;
        int curr = -1;
        string temp = "";
        s += " ";
        
        for(int i=0; i<s.size(); i++)
        {
            if(isdigit(s[i])) 
            {
                temp = temp + s[i];
            } 
            
            else if(temp.size()) 
            {
                curr = stoi(temp);
                
                if(prev >= curr) 
                {
                    return false;
                }
                prev = curr;
                temp = "";
            }
        }
        
        return true;
    }
};