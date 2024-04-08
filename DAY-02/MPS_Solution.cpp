class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN;
        int suf=1,prf=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(suf==0) suf=1;
            if(prf==0) prf=1;
            prf=prf*nums[i];
            suf=suf*nums[n-i-1];
            maxi=max(maxi,max(prf,suf));
        }
        return maxi;
    }
};
