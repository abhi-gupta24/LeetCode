// class Solution {
// public:
//     int countHomogenous(string s) 
//     {
//          long int count = 0 ;
//          long  result = 0 ;
        
//         for(int i = 0;i < s.size();i++)
//         { 
//             if(i> 0 && s[i]==s[i-1] )
//             {
//                 count++;
                
//             }
//             else
//             {
//                 count = 1;
//             }
            
//             result += count%(10^9 + 7);                       // result = (result + count)%(10^9 + 7);
//         }
//       return result;  
//     }
// };


class Solution {
public:
    int countHomogenous(string s) 
    {
        int n = s.size();
        int M = 1000000007;
        long ans = 0;
        for(int i=0; i<n; i++){
            long count = 1;
            while(i+1 < n && s[i] == s[i+1]){
                count++;
                i++;
            }
            ans += (count*(count+1))/2;
        }
        return ans%M;
    }
};    
    