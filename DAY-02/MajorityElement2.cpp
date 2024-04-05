class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        int el1=INT_MIN;
        int el2=INT_MIN;
        int c1=0,c2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(c1==0 && el2!=nums[i]){
                c1=1;
                el1=nums[i];
            }
            else if(c2==0 && el1!=nums[i]){
                c2=1;
                el2=nums[i];
            }
            else if(el1==nums[i]) c1++;
            else if(el2==nums[i]) c2++;
            else{
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        int mini=(int)n/3 +1;
        for(int i=0;i<n;i++){
            if(el1==nums[i])c1++;
            if(el2==nums[i])c2++;
        }
        if(c1>=mini)  ls.push_back(el1);
        if(c2>=mini)  ls.push_back(el2);
        sort(ls.begin(),ls.end());
        return ls;
    }
};
