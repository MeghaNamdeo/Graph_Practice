
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edges;
    cin>>vertex >>edges;
    
    vector<int>AdjList[vertex];
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
    //print the list
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<"->";
        for(int j =0;j<AdjList[i].size();j++)
        {
            cout<<AdjList[i][j]<<" ";
            
            
        }
        cout<<endl;
    }
    
    
    

    return 0;
}
output 
5 6
0 1
0 4
1 2
1 3
2 3
3 4


output
0 -> 1 4 
1 -> 0 2 3 
2 -> 1 3 
3 -> 1 2 4 
4 -> 0 3 


tc and sc :O(v+e)

//undirected_weight_graph
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edges,weight;
    cin>>vertex >>edges;
    
    vector<pair<int,int>>AdjList[vertex];
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight;
        AdjList[u].push_back({v,weight});
        AdjList[v].push_back({u,weight});
    }
    //print the list
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<"->";
        for(int j =0;j<AdjList[i].size();j++)
        {
            cout<<"("<<AdjList[i][j].first<<", "<<AdjList[i][j].second<<")";
            
            
        }
        cout<<endl;
    }
    
    
    

    return 0;
}

5 6
0 1 10
0 4 5
1 2 3
1 3 8
2 3 4
3 4 2


output
0 -> (1, 10) (4, 5) 
1 -> (0, 10) (2, 3) (3, 8) 
2 -> (1, 3) (3, 4) 
3 -> (1, 8) (2, 4) (4, 2) 
4 -> (0, 5) (3, 2) 


//directed_weight_graph
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edges,weight;
    cin>>vertex >>edges;
    
    vector<pair<int,int>>AdjList[vertex];
    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v>>weight;
        AdjList[u].push_back({v,weight});
        
    }
    //print the list
    for(int i=0;i<vertex;i++)
    {
        cout<<i<<"->";
        for(int j =0;j<AdjList[i].size();j++)
        {
            cout<<"("<<AdjList[i][j].first<<", "<<AdjList[i][j].second<<")";
            
            
        }
        cout<<endl;
    }
    
    
    

    return 0;
}


output
