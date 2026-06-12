class Solution {
public:
    void dfs(vector<int>adj[],vector<int>&visited, int i){
        visited[i]=1;
        for(auto it:adj[i]){
            if(visited[it]==0) dfs(adj,visited,it);
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int>visited(n,0);

        vector<int>adj[n];
        for(auto j:edges){
            adj[j[0]].push_back(j[1]);
            adj[j[1]].push_back(j[0]);
        }

        int count=0;
        for(int i=0;i<n;i++){
        if(visited[i]==0){
            count++;
            dfs(adj,visited,i);
        }
        }
        return count;

    }
};
