class Solution {
public:
    bool squareIsWhite(string coordinates)
    {
        if((coordinates[0] + coordinates[1])%2 == 0)   
        {
            return false;                         // if sum is even then , square is black and false
        }                                         //   c7 --> 3+7 --> 10 (even) --> false      
        else
        {
           return true;                           // if sum is odd then , square is white and true
        }                                         // h3 --> 8+3 --> 11 (odd) --> true     
    }
};