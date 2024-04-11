# Minimum in Rotated Sorted Array

We have to find the minimum element in a rotated sorted array. we can find this be finding which part of the array is sorted ans then selecting the minimum value of that sorted array i.e the first element of a sorted array.\
Solution:
1. we will find the mid element .
2. we would find which part of array is sorted.
3. we would select first element of array and update it with answer variable if required.
4. we would apply the same procedure for remaining part again till our low<=high.
