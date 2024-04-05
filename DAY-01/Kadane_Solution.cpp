class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum=0;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            cur_sum+=nums[i];
            maxi=max(cur_sum,maxi);
            if (cur_sum<0) cur_sum=0;
        }
        return maxi;
    }
};
