class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>heap;
        vector<vector<int>>result;

        for(auto it=0;it<points.size();it++){
            int val=points[it][0]*points[it][0]+points[it][1]*points[it][1];
            heap.push({val,it});

            if(heap.size()>k) heap.pop();
            
        }
        while(!heap.empty()){
            pair<int,int> front=heap.top();
            heap.pop();
            result.push_back(points[front.second]);

        }

        return result;
    }
};
