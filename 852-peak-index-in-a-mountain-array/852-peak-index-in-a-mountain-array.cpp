class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {   int n = arr.size();
        
        //peak will be between starting and end point
        int s = 0;
        int e = arr.size()-1;
        
        int mid = s + (e-s)/2;
        
        while(s<=e)
        {
            //if peak is at mid
            if(arr[mid+1] < arr[mid] && arr[mid-1] < arr[mid])
            {
                return mid;
            }
            
            //if peak is at ascending side of mountain
            else if(arr[mid+1]>arr[mid])
            {
                s =mid+1;
            }
            
            //if peak is at descending side of mountain
            else if(arr[mid-1]>arr[mid])
            {
                e=mid-1;
            }
            
            mid = s + (e-s)/2;
        }
        
        return -1;
    }
};

