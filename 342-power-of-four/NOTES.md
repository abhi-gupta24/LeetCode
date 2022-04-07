​//Bit maupulation approach

class Solution {
public:
    bool isPowerOfFour(int num)
		{
        if(num<0)
				{
				   return false;
					}
        for(int i=0;i<32;i+=2)
				{
				   if(num==1<<i)
				  { return true;
					}
        return false;
    }
};
Logic = Only one st bit at odd palces if it's is power of 4


4^ n -->  8 4 2 1
 
4^0 = 1 = 0 0 0 1
4^ 1 = 4 - 0 1 0 0
4^3 = 64 - 1000000
4^4 = 256 - 100000000
