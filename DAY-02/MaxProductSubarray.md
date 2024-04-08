# Maximum Product Subarray

Intuition:
1. if the array has all positive numbers then answer would be simple whole array.\
2. if the array has even negative numbers then also the answer would be whole array.\
3. but if array has odd negative elements then we can divide our array into 2 parts around that negative number that is prefix and suffix.\

  [3, 2, -1, 4, -6, 3, -2, 6]

array can be divided about -1 into [3, 2] and [4, -6, 3, -2, 6]
array can be divided about -6 into [3, 2, -1, 4] and [3, -2, 6]
array can be divided about -2 into [3, 2, -1, 4, -6, 3] and [ 6]

AND we will calculate all prefix and suffix while iterating from both directions and will update our maxi variable to get maximum product of subarray.\
if we have zero in our array we will re initailze our suf and prf to 1 , indicating we calculating for new subarray.


