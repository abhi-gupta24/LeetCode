class Solution {
public:
    
    int compute(int last_element, int arr_size)
    {
        return last_element - arr_size;
    }
    
    int findKthPositive(vector<int>& arr, int k)
    {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int missing = compute(arr[n-1],n) ; //o find number of missing numbers
            
            while(s <= e)
            {
                
                int mid = s + (e-s)/2;
                missing = compute(arr[mid],mid+1);
                
                if(missing >= k)
                {
                    e = mid-1;
                }
                else
                {
                    s = mid+1;
                }
            }
        
        // end --> -1
        if( e == -1)
        {
            return k;
        }
        
       return arr[e] + k-compute(arr[e], e+1);
            
    }
};