# Kadane Algorithm
We have to find out the maximum subarray(continous) sum. let say array is [-2, 1, -3, 4, -1, 2, 1, -5, -4]

Solution\
So simple approach iterate the array having two variable the maxi that stores INT_MIN initially and then cur_sum that stores the current sum for the array and update the maxi with curr_sum to get maximum value subarray, if the current sum becomes less than zero then reject current sum and take it as 0(reject previous subarray simply) 
