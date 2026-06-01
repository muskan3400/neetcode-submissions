class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        int buy=prices[0];
        int prof=0;
        for(int i=1;i<prices.size();i++){
            if(buy<prices[i]){
            prof=prices[i]-buy;
            maxprof=max(maxprof,prof);}
            
            else{
                buy=prices[i];
            }
            
            
        }
        
        return maxprof;
    }
};
