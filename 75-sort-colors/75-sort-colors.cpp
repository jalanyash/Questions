class Solution {
public:
   void merge(vector<int> &nums,int l, int mid, int r){
            int j=mid+1;
            int i=l;
            int f= l;
            vector<int> temp(1e5);
            
            while(i<=mid && j<=r){
                if(nums[i]<nums[j]){
                    temp[f]=nums[i];
                    i++;
                }
                else{
                    temp[f]=nums[j];
                    j++;
                }
                f++;
            }
                    
                if(i>mid){
                    while(j<=r){
                        temp[f]=nums[j];
                        f++;
                        j++;
                    }
                }else {
                    while(i<=mid){
                        temp[f]=nums[i];
                        f++; i++;
                    }
                 }
                
                for(int f=l;f<=r;f++)
                    nums[f]=temp[f];
            }
    void mergeSort(vector<int> &nums,int l, int r){
                if(l<r){
                    int mid=(l+r)/2;
                    mergeSort(nums,l,mid);
                    mergeSort(nums,mid+1,r);
                    
                    merge(nums,l,mid,r);
                }
            }    

    void sortColors(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
    }
};

        