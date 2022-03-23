
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


//                      OR

// class Solution {
// public:
//     int countHomogenous(string str) {
        
//         long long int c=1,t=1;
        
//         for(int i=1;i<str.size();i++)
//         {
//             if(str[i]==str[i-1])
//                 t++;
//             else
//                 t=1;
//             c+=t;
//         }
//         return (c)%1000000007;
// 		}
// 	};



//                 OR

// class Solution {
// public:
//     int countHomogenous(string s) 
//     {
//          long  long int count = 1 ;
//          long long int  result = 1 ;
        
//         for(int i = 1;i < s.size();i++)
//         { 
//             if( s[i]==s[i-1] )
//             {
//                 count++;
                
//             }
//             else
//             {
//                 count = 1;
//             }
            
//             result += count;                       // result = (result + count)%(10^9 + 7);
//         }
//       return result %(10000000007);  
//     }
// };
    