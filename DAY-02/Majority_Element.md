# Majority Element 2

We have to find a element whos occurance is more than n/3 times in an array. Lets say array is [1, 1, 1, 3, 3, 2, 2, 2]

the number of solutions that would be more than n/3 times would be maximum 2 only. how ??
say n=8  =>  (more than n/3 would be) => <2  i.e 3, 4, 5 etc and if number a has 3 occurance b has 3 also c would have 2 only.\
n=9 => (more than n/3) => <3 i.e 4, 5, 6 etc and if a has 4, b has 4 then c would have only 1 occurance.

so its clear for more than n/3 times occuring elements there would be only 2 elements in such case.

Solution 1:\
brute force \
define a list and put every element that is occuring more than n/3 times while iterating through the array.\
for ( i -> 0 to n-1){\
  if(ls.size()==0 or nums[i]!=ls[0]){\
    cnt=0;\
    for (j =0 to n-1){\
      if (check) cnt++;\
    }\
    if (cnt>mm_value) ls.add(nums[i]);\
  }\
}\

Solution 2:\
hashing\
for(i=0 to n-1){\
  mp[arr[i]]++;\
  if(mp[arr[i]] == mm) ls.add(arr[i]);\
}\
but we are using extra map has space complexity of O(n).\



 
