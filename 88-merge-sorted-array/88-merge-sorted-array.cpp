class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=m-1;
       int j=n-1;
       int x=n+m-1;
        while(j>=0){
            if(i>=0 && nums1[i]>nums2[j]){
                nums1[x]=nums1[i];
                x--;
                i--;
            }
            else{
                nums1[x]=nums2[j];
                x--;
                j--;
            }
        }
    }
};