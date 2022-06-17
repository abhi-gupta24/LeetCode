class Solution {
public:
    bool digitCount(string num) 
    {
        for(int i=0;i<num.length();i++)
        {
			// int to char
            char ch =  i + '0';
			
			// count no. of occurance
            int req = count(num.begin(),num.end(),ch);
			
			// check the given condtion
            if(req!=(num[i]-'0'))  
            {
                return false;
            }
        }
        return true;
    }
};