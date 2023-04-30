#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;

void dfs(unordered_map<int,list<int>> &adj,unordered_map<int,bool> &visited,int node,vector<int> &component){
    component.push_back(node);
    visited[node]=true;
    for(auto i:adj[node]){
        if(!visited[i]){
            dfs(adj,visited,i,component);
        }
    }
}

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<E;i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>> ans;
    unordered_map<int,bool> visited;
    for (int i = 0; i < V; i++) {
        if(!visited[i]){
            vector<int> component;
            dfs(adj,visited,i,component);
            ans.push_back(component);
        }
    }
    return ans;
}

int main(){
    int V=5;
    int E=5;
    vector<vector<int>> edges={{0,2},{2,1},{1,3},{4,3},{2,4}};
    vector<vector<int>> ans = depthFirstSearch(V,E,edges);
    for(auto a: ans){
        for(auto b:a){
            cout<<b<<",";
        }
    }
    return 0;
}