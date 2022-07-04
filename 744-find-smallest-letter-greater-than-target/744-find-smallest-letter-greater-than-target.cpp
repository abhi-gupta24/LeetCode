// TC - O(logn), SC - O(1)

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        int n = letters.size();
        int s = 0;
        int e = n-1;
        
        if(target >= letters[e])
        {
            return letters[0];
        }
        
        while(s < e)
        {
            int mid = s + (e-s)/2;
            
            if(letters[mid] <= target)
            {
                s = mid+1;
            }
            else
            {
                e = mid;
            }
        }
      return letters[e];
    }
};




