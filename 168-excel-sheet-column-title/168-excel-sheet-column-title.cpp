class Solution {
public:
    string convertToTitle(int columnNumber) 
    {  
        string ans ;
        while(columnNumber > 0)
        { 
            columnNumber --;
            
            int current = columnNumber % 26;
            columnNumber = columnNumber/26;
                
            ans.push_back('A' + current) ; 
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// Note :
// A -> 0
// .
// .
// .
// Z -> 25        
    

