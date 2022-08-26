class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size(),i,sum=0;
        int maxi=INT_MIN;
        for(i=0;i<=n-1;i++){
           sum= sum+nums[i];
           maxi=max(maxi,sum);
           if(sum<0) sum=0;
        }
        return maxi;
    }
};