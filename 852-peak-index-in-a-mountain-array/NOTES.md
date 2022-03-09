**Solution I: O(n) time comlexity**
Just iterate through the array. It is guarenteed to be a mountain, so we just have to find the first index which is not smaller than the next one.
​
int peakIndexInMountainArray(vector<int>& arr) {
int left = 0;
while (arr[left] < arr[left+1]) left++;
return left;
}
**Solution II: Binary Search - O(log(n)) time complexity**
​
In each iteration, we check the mid: if it's smaller than the next element, it's on the left side of the mountain and we have to continue searching in the right side of mid. So low = mid+1. Otherwise, high = mid-1.
​
int peakIndexInMountainArray(vector<int>& arr) {
int low = 0, high = arr.size()-1;
while (low <= high) {
int mid = low + (high - low) / 2;
if (arr[mid] < arr[mid+1])
low = mid+1;
else
high = mid-1;
}
return low;