/******************************************************************************

Adjacency matrix

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int vertex , edges;
    cin>>vertex>>edges;
    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));
    int u , v ;
    for(int i =0; i < edges;i++)
    {
        cin >> u >> v ;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
        
    }
    for(int i =0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//output
Vertices: 5
Edges: 6
Edge list:
0 1
0 2
1 2
1 3
2 4
3 4
output :
0 1 1 0 0 
1 0 1 1 0 
1 1 0 0 1 
0 1 0 0 1 
0 0 1 1 0 



/******************************************************************************

undirected weighted Adjacency matrix

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int vertex , edges, weight;
    cin>>vertex>>edges;
    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));
    int u , v ;
    for(int i =0; i < edges;i++)
    {
        cin >> u >> v>>weight ;
        AdjMat[u][v]=weight;
        AdjMat[v][u]=weight;
        
    }
    for(int i =0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
5 6
0 1 10
0 2 5
1 2 3
1 3 8
2 4 2
3 4 7

output 
0 10 5 0 0 
10 0 3 8 0 
5 3 0 0 2 
0 8 0 0 7 
0 0 2 7 0 

/******************************************************************************

directed weighted Adjacency matrix

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int vertex , edges, weight;
    cin>>vertex>>edges;
    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));
    int u , v ;
    for(int i =0; i < edges;i++)
    {
        cin >> u >> v>>weight ;
        AdjMat[u][v]=weight;
       
        
    }
    for(int i =0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
output 
0 10 5 0 0 
0 0 3 8 0 
0 0 0 0 2 
0 0 0 0 7 
0 0 0 0 0 


time and space complexity : O(V^2)

