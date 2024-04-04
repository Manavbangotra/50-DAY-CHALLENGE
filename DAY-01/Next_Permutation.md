# Next Permutation 
for example a given array = [3, 1, 2]

the different permutations for following array would be 
1 2 3\
1 3 2\
2 1 3\
2 3 1\
3 1 2\
3 2 1

we have to find next permutation for a given array.

*Solution*

Brute force\
we have to generate all the permutations of array in sorted order and then we would apply linear search to find our index for given permutation and will return next index's permutation for the answer.

Better\
In built STL is already present in C++ \
next_permutation(A.begin(),A.end());

Optimal\
Observation -> Algorithm -> Dry Run -> Code\
Step 1 start from the last and find the break point that is a[i] < a[i+1] and store this index i in some variable let say index 'ind'.\
* if ind is found out to be -1 means the array is in desending order just reverse the array\
* else\
Step 2 start from the last again and find the element which is just greater than element at index 'ind' that is a[i]>a[ind] and swap these numbers and break.\
Step 3 reverse the array reverse(a.begin()+ind +1,a.end());


