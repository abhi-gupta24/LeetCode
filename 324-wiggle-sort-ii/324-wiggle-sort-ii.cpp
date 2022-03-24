class Solution {
public:
    void wiggleSort(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());        //  [1,5,1,1,6,4] --->(after sorting) ----> [1,1,1,4,5,6]
                                              //                                          [a,b,c,d,e,f]
        
        vector<int> temp(n);
        
        int i = 1, j = n-1;
        while(i <nums.size())
        {
            temp[i] = nums[j];             // temp[i] = [0,6,0,5,0,4,0]
            i+=2;                          //           [0,f,0,e,0,d,0]
            j--;
        }
        
        i = 0;                           // now j is at 3rd index
        while(i<nums.size()){
            temp[i] = nums[j];              // temp[i] = [1,6,1,5,1,4]
            i+=2;                          //            [c,f,b,e,a,d]
            j--;
        }
        for(int it =0; it<n;it++){
            nums[it] = temp[it];
        }
    }
};