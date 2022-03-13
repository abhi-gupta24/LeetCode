//Two pointer approach
// T = O(n) & S = O(1)
// toupper - is a function to convert lowercase letters into uppercase.
// isalnum - is a function to check if character is alphabet or numeric.

// I used two pointers (start & end) to iterate and compare, but the problem came when any other character apart from alphabet and numeric came then I used toupper function to compare its ASCII values in uppercase format if it exists.



class Solution {
public:
    bool isPalindrome(string s) 
    {
        int left = 0;
        int right = s.size()-1;
        while(left < right)
        {
            if(!isalnum(s[left]))
            {
                left++;
            }
            else if(!isalnum(s[right]))
            {
                right--;
            }
            
           else if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
};