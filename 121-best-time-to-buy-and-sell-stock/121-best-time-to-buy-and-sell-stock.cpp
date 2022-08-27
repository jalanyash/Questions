class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int maxpro=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            maxpro=max(prices[i]-min,maxpro);
        }
        return maxpro;
    }
};