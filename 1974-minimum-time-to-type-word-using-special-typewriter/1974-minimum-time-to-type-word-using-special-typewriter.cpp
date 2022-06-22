class Solution {
public:
    int minTimeToType(string word) 
    {
        int t = word.size();        //total time taken
        char l = 'a';
        for(char i = 0; i < word.size(); i++)
        {
            t += min(abs(word[i]-l), 26 - abs(l-word[i]));   //minimum of clockwise and counter clockwise
            l = word[i];
        }
       return t; 
    }
};


