class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string temp;
        int i = 1;
        
        while(ss>>temp) {
            if (temp.compare(0, searchWord.size(), searchWord) == 0) 
                return i;
            i++;
        }
        
        return -1;
    }
};