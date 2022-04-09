The explanation is quite simple -
​
The array is of size 2n, meaning its size is even.
​
Consider the input [6,4,2,1,3,5]
​
First, we sort the array from the smallest to largest -
​
The explanation is quite simple -
​
The array is of size 2n, meaning its size is even.
​
Consider the input [6,4,2,1,3,5]
​
First, we sort the array from the smallest to largest -
​
[1,2,3,4,5,6]
​
Then, we don't need to create all of the sets, as we can simply pick the largest minimum of each pair by increasing our cursor by 2.
1,2), (3,4), (5,6)
So, our sets are basically - (1,2), (3,4), (5,6)
​
Now, we must pick the minimum and since we've sorted the array - n[i] will be <= n[i+1]
​
So - n[i] is always the minimum of (n[i], n[i+1])
​
Iterating the array by 2 will give us the desired result -
​
1 + 3 + 5 = 9
​
Then, we don't need to create all of the sets, as we can simply pick the largest minimum of each pair by increasing our cursor by 2.
​
So, our sets are basically - (1,2), (3,4), (5,6)
​
Now, we must pick the minimum and since we've sorted the array - n[i] will be <= n[i+1]
​
So - n[i] is always the minimum of (n[i], n[i+1])
​
Iterating the array by 2 will give us the desired result -
​
1 + 3 + 5 = 9