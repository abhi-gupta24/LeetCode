class Solution {
public:
    int candy(vector<int>& ratings)
    {
        int size = ratings.size();
        if(size <= 1)
        {
            return size;
        }
        
        vector<int> candies(size,1);
        for(int i = 1; i < size; i++)
        {
            if(ratings[i] > ratings[i-1])
            {
                candies[i] = candies[i-1] + 1;
            }
        }
        
        for( int i = size -1; i > 0; i--)
        {
            if(ratings[i-1] > ratings[i])
            {
                candies[i-1] = max(candies[i-1], candies[i]+1);
            }
        }
        
        int total_candies = 0;
        for(int i = 0; i < size; i++)
        {
            total_candies += candies[i]; 
        }
       return total_candies; 
    }
};



