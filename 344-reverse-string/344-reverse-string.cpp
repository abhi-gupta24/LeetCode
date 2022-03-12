// Two pointer approach
//TC - O(n),  SC - O(1)

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int start = 0;
        int end = s.size()-1;
        
        while(start < end)
        {
            swap(s[start++],s[end--]);
            
            //   OR
            // swap(s[start],s[end]);
            // start ++;
            // end--;
            
            
            //   OR
            // int temp = s[start];
            // s[start] = s[end];
            // s[end] = temp;
            // start++;
            // end--;
        }
    }
};