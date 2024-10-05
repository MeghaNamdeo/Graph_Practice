

 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
      //create queue
      queue<int>q;

      q.push(0);

      vector<bool>visited(V,0);
      
      visited[0]=1;
      vector<int>ans;
      while(!q.empty())
      {
          int node = q.front();
          q.pop();
          ans.push_back(node);
          for(int j=0;j<adj[node].size();j++)
          {
              if(!visited[adj[node][j]])
              {
                  visited[adj[node][j]]=1;
                  q.push(adj[node][j]);
              }
          }
      }return ans;
    }
    

vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    // Step 1: Create a queue 
    queue<int> q;
    q.push(0);
    
    vector<bool> visited(n, false);
    visited[0] = true;
    
    vector<int> ans;
    
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        
        // Iterate through the neighbors
        for (int j = 0; j < adj[node].size(); j++) {
            int neighbor = adj[node][j];
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);  // Corrected line
            }
        }
    }
    return ans;
} // TC: O(V + E), SC: O(V)
