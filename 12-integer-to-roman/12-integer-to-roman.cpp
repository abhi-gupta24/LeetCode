class Solution {
public:
    string intToRoman(int num)
    {
        string roman[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
      int value[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};   
        
        string ans;
        
        for(int i = 12; i>= 0; i--)
        {
            while(num >= value[i])
            {
                ans.append(roman[i]);
                num = num - value[i];
            }
        }
       return ans; 
        
        
    }
};


