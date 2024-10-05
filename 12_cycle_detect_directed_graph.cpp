class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool detectCycle(int node, vector<int> adj[], vector<bool>&path, vector<bool>&visited)
    {
        visited[node]=true;
        path[node]=true;
        for(int i=0;i<adj[node].size();i++)
        {
            // Directly access the neighbor
            if(path[adj[node][i]])
            return true;
            
            // If the neighbor node is already present in the path, a cycle is present
            if(visited[adj[node][i]]) 
            continue;
            
            // If the neighbor is not visited, continue detecting cycles
            if(detectCycle(adj[node][i],adj,path,visited))
            return true;
        }
        
        path[node]=false;
        return false;
    }
        
        
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool>path(V,false);
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                if(detectCycle(i,adj,path,visited))return true;
            }
        }return false;
        
    }
};
