class Solution {
public:
    int removePalindromeSub(string s)
    {
        if(s == "")
        {
            return 0;
        }
        
        for(int i = 0, j = s.size()-1; i < j; i++ ,j--)
        {
            if(s[i] != s[j])              // if not palindrome then string will always be emty in 2 step , first for
            {                            // all "a" and second step for all "b"
                return 2;
            }
        }
        
        // else                     // if string os palindrome then get empty in one step
       return 1; 
    }
};



          // OR

// class Solution {
// public:
//     int removePalindromeSub(string s)
//     {
//         if(s == "")
//         {
//             return 0;
//         }
        
//         int j = s.size()-1;
//         for(int i = 0; i < j; i++)
//         {
//             if(s[i] != s[j])
//             {  
                
//                 return 2;
//             }
//             j--;
//         }
        
//        return 1; 
//     }
// };
