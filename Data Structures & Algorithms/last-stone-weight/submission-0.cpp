class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>>heap;
        for(auto& it:stones){
            heap.push(it);
        }

        while(!heap.empty()){
            int first=heap.top();
            heap.pop();
            if(heap.empty())return first;
            else{
                int second=heap.top();
                heap.pop();

                if(first>second)heap.push(first-second);    
            }
        }
        return 0;
    }
};
