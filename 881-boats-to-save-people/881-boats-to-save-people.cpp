// Optimal approach - Two pointer
// TC - O(nlogn){ assuming merge sort},  SC- O(1)


// Note - Each boat carries at most two people at the same time
// That means either one person or maximum two person can be in boat


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(),people.end());            // [3,5,3,4] ----> [3,3,4,5]
        int start = 0;
        int end = people.size()-1;
        
        int count = 0;
        
        while(start <= end)
        {
            if(people[start] + people[end] <= limit)
            {
                count ++;
                start ++;
                end --;
            }
            
            else                                //  people[start] + people[end] > limit
            {   count ++ ;                      // then either people[start] or  people[end] will come in boat  
                end --;
            }
        }
       return count; 
    }
};