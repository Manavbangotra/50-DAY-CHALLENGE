# Search in Rotated Sorted Array

let suppose we have a soreted array and it is rotated such that it looks like\
[7, 8, 1, 2, 3, 4, 5, 6]\
for the array we have to search a element and have to return index of it.\
lets say target is 1.\
The approach that we would use for it would be of binary search.

Solution:
1. firstly we would find the mid of the array, for given array the mid is 2.
2. then we would find which part of array is sorted, for the case atleast one part of array will be always sorted.
3. then we would find whether the element belongs to the sorted array range or not and we would trim down our range.
   for this instance the right part is sorted so we would find if 1 belongs to range of sorted array that is 2 to 6 because it is sorted we could find whether it belongs or not using logic of range. as it doesn't belongs we trim down array and new high would be mid -1.
4. we would repeat the above process until low<=high.
