class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        using P= pair<int,int>;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }

        priority_queue<P,vector<P>,greater<P>>minheap;

        for(auto& it: freq){
            minheap.push({it.second,it.first});
            if(minheap.size()>k)minheap.pop();
        }

        vector<int>result;
        while(!minheap.empty()){
            result.push_back(minheap.top().second);
            minheap.pop();
        }

        return result;
    }
};
