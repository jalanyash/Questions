class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int ans=-1;
        int start=0, end=n-1;
        int mid=start+(end-start)/2;
        
        while(start<=end){
            
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                ans=mid;
                return ans;
            }
            else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]){
                mid++;
            }
            else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
                mid--;
            }
        }
        return ans;
    }
};