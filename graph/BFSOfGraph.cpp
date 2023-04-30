/*
input:

4 4
0 1
0 3
1 2
2 3

    0
  / |
1 --|----2
    |  /
    3 

output:
0 1 3 2

Starting from 0, it is connected to 1 and 3, which will be printed. Then comes 2, which was connected to 1.
*/


#include <bits/stdc++.h> 
void createAdjList(unordered_map<int,set<int>> &adj,vector<pair<int, int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;
        
        adj[u].insert(v);
        adj[v].insert(u);
    }
}


void bfs(unordered_map<int,set<int>> &adj,vector<int> &ans,
unordered_map<int,bool> &visited,int node){
    queue<int> q;
    q.push(node);
    visited[node]=true;
    while(!q.empty()){
        int frontNode=q.front();
        q.pop();
        ans.push_back(frontNode);
        for(auto i:adj[frontNode]){
                if(!visited[i]){
                q.push(i);
                visited[i]=true;
             }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    vector<int> ans;
    unordered_map<int,set<int>> adj;
    unordered_map<int,bool> visited;
    createAdjList(adj,edges);
    for(int i=0;i<vertex;i++){
        if(!visited[i]){
            bfs(adj,ans,visited,i);
        }
    }
    return ans;
}

