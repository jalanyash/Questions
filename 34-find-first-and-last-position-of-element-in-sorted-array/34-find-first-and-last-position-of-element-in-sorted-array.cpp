class Solution {
public:
    int firstOcc(vector<int>&nums,int target){
        int n=nums.size();
        int ans=-1;
        int start=0,end=n-1;
        int mid= start+(end-start)/2;
        while(start<=end){
            
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
            mid=start + (end-start)/2;
        }
        return ans;
    }
    
    int lastOcc(vector<int>&nums,int target){
        int n=nums.size();
        int ans=-1;
        int start=0,end=n-1;
        int mid= start+(end-start)/2;
        while(start<=end){
            
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
            mid=start + (end-start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2);
        v[0]= firstOcc(nums,target);
        v[1]= lastOcc(nums,target);
        return v;
    }
};