class Solution {
public:
    bool bfs(vector<vector<int>>& graph, vector<int> &vis,int start,int color){
        vis[start] = color;
        queue<int> q;
        q.push(start);
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(auto neighbor: graph[curr]){
                if(vis[neighbor] == 0){
                    vis[neighbor] = (vis[curr] == 1 ? 2 : 1);
                    q.push(neighbor);
                }else {
                    if(vis[neighbor] == vis[curr])
                        return false;
                }
            }
        }

        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n,0);

        for(int i=0;i<n;i++){
            if(vis[i]==0 && bfs(graph,vis,i,1) == false)
                return false;
        }
        return true;
    }
};