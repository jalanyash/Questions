class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int st = intervals[0][0], ed = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=ed)//is merging
            {
                ed=max(ed,intervals[i][1]);
            }
            else//not merging
            {
                vector<int> tmp(2);
                tmp[0]=st;tmp[1]=ed;
                ans.push_back(tmp);
                // initialise new pair
                st=intervals[i][0];
                ed=intervals[i][1];
            }
        }
        vector<int> tmp(2);
        tmp[0]=st;tmp[1]=ed;
        ans.push_back(tmp);
        return ans;
    }
};