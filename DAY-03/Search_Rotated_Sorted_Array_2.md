# Search in Rotated Sorted Array 2

We have to search in rotated Sorted array again but this time we have duplicates in our array so we have to return whether the element is present in element or not.
the limiting condition is when nums[low]=nums[mid]=nums[high].\
Solution:
For this what we can do is add the Solution is one simple statement of shrinking the array size.
<pre>
  if(nums[low]==nums[mid] and nums[mid]==nums[high]){
    low=low+1;
    high=high-1;
    continue;
  }
</pre>

