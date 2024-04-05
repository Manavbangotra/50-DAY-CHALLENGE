# 3 Sum
given an array let say [-1, 0, 1, 2, -1, -4]\
we have to find out the number of unique triplets whose sum is equal to zero.

Solution

Brute force\
Run a 3 loop solution and check for every possible permutation and put that triplet into a set after sorting.\
time compelxity for the solution would be around N^3 and space complexity would be around N.

Better\
better approach would be using the fact that as we know nums[i]+nums[j]+nums[k]=0. we also can use this thing as\
nums[k]=-(nums[i]+nums[j])\
so we would maintain a hash table and iterate using 2 loops and would find if the required k index element in hashtable we would agian sort the  triplet and push it onto a set.

Optimal\
first of all sort the array\
The optimal approach uses the two pointer approach where we run a loop for every number in arrray we make apointer to the last and pointer that is just next to the for loop pointer in this way we find out the sum that is\
sum = nums[i] +nums[j] +nums[k] if sum < 0 then j++, if sum >0 k--, else add this triplet to the vector of vector and move the pointers j and k to next valid locations.
