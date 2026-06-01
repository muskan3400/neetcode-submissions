class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        int buy=prices[0];

        for(int i=1;i<prices.size();i++){
            buy=min(prices[i],buy);
            maxprof=max(prices[i]-buy,maxprof);
        }

        return maxprof;
    }
};
